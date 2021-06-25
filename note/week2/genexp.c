#include "rlib.h"
void E();
void T();
void F();
// === EBNF Grammar =====
// E=T ([+-] T)*
// T=F ([*/] F)?
// F=[0-9] | (E)
int main(int argc, char * argv[]) {
	//如果要出現的是隨機在此加上  timeSeed();
    E();
	int i;
	for (i=0; i<10; i++) {
		E();
		printf("\n");
	}
}
void E() {
    T();
	while (randInt(10) < 3) {
       printf("%c", randChar("+-"));
	   T();
	}
}
//? if * while
void T() {
    F();
	if (randInt(10) < 7) {
		printf("%c", randChar("*/"));
		F();
	}
}

void F() {
    if (randInt(10) < 8) {
		printf("%c", randChar("0123456789"));
	} else {
		printf("(");
		E();
		printf(")");
	}
}