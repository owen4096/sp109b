void FOR(){
  int ForBegin = nextLabel();
  int ForEnd = nextLabel();
  skip("for");
  skip("(");
  int a = E();
  skip(";");
  // 迴圈起點
  emit("(L%d)\n", ForBegin);

  int b = E();
  skip(";");
  emit("if T%d goto L%d\n", b, ForEnd);
  int c = E();
  skip(")");
  STMT();
  emit("goto L%d\n", ForBegin);
    emit("(L%d)\n",ForEnd);
}