#include <assert.h>
#include "compiler.h"

int E();
void STMT();
void IF();
void BLOCK();

int tempIdx = 0, labelIdx = 0;

#define nextTemp() (tempIdx++)
#define nextLabel() (labelIdx++)
// #define emit printf
int isTempIr = 0;
char tempIr[100000], *tempIrp = tempIr;
#define emit(...) ({ \
  if (isTempIr){ \
    sprintf(tempIrp, __VA_ARGS__); \
    tempIrp += strlen(tempIrp);\
  }\
  else { \
    printf(__VA_ARGS__);\
  }\
})

int isNext(char *set) {
  char eset[SMAX], etoken[SMAX];
  sprintf(eset, " %s ", set);
  sprintf(etoken, " %s ", tokens[tokenIdx]);
  return (tokenIdx < tokenTop && strstr(eset, etoken) != NULL);
}

int isEnd() {
  return tokenIdx >= tokenTop;
}

char *next() {
  return tokens[tokenIdx++];
}

char *skip(char *set) {
  if (isNext(set)) {
    return next();
  } else {
    printf("skip(%s) got %s fail!\n", set, next());
    assert(0);
  }
}


int F() {
  int f;
  if (isNext("(")) { 
    next(); 
    f = E();
    next(); 
  } 
  else { 
    f = nextTemp();
    char *item = next();
    if(isNext("++")){
      emit("%s = %s + 1\n", item, item);  //%s 字串符
      next(); 
    }
    else if(isNext("--")){
      emit("%s = %s - 1\n", item, item);
      next();
    }
    else{
      emit("t%d = %s\n", f, item);
    }
  }
  return f;
}


int E() {
  int i1 = F();
  while (isNext("+ - * / & | ! < > = <= >= == !=")) {
    char *op = next();
    int i2 = E();
    int i = nextTemp();
    emit("t%d = t%d %s t%d\n", i, i1, op, i2);
    i1 = i;
  }
  return i1;
}

void ASSIGN() {
  char *id = next();
  skip("=");
  int e = E();
  skip(";");
  emit("%s = t%d\n", id, e);
}

void WHILE() {
  int whileBegin = nextLabel();
  int whileEnd = nextLabel();
  emit("(L%d)\n", whileBegin);
  skip("while");
  skip("(");
  int e = E();
  emit("if not t%d goto L%d\n", e, whileEnd);
  skip(")");
  STMT();
  emit("goto L%d\n", whileBegin);
  emit("(L%d)\n", whileEnd);
}

void IF() {
  int ifBegin = nextLabel();
  int ifMid = nextLabel();
  int ifEnd = nextLabel();
  emit("(L%d)\n", ifBegin);
  skip("if");
  skip("(");
  int e = E();
  emit("if not t%d goto L%d\n", e, ifMid);
  skip(")");
  STMT();
  emit("goto L%d\n", ifEnd);
  emit("(L%d)\n", ifMid);
  if (isNext("else")) {
    skip("else");
    STMT();
    emit("(L%d)\n", ifEnd);
  }
}

void FOR() {
  int forBegin = nextLabel();
  int forEnd = nextLabel();
  skip("for");
  skip("(");
  ASSIGN();
  emit("(L%d)\n", forBegin);
  int e = E();
  emit("if not t%d goto L%d\n", e, forEnd);
  skip(";");
  isTempIr = 1;
  F();
  isTempIr = 0;
  char e3str[1000];
  strcpy(e3str, tempIr);
  skip(")");
  STMT();
  emit("%s\n",e3str);
  emit("goto L%d\n", forBegin);
  emit("(L%d)\n", forEnd);
}


void STMT() {
  if (isNext("while"))
    return WHILE();
  else if (isNext("if"))
    IF();
  else if (isNext("for"))
    FOR();
  else if (isNext("{"))
    BLOCK();
  else
    ASSIGN();
}




void STMTS() {
  while (!isEnd() && !isNext("}")) {
    STMT();
  }
}
void BLOCK() {
  skip("{");
  STMTS();
  skip("}");
}
void PROG() {
  STMTS();
}
void parse() {
  printf("============ parse =============\n");
  tokenIdx = 0;
  PROG();
}