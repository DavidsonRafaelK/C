#include <stdio.h>

int main(){
  /*
  Augmented assignment operators = Used to replace a statement where an operator takes a variable as on eof it's argiment's and then
                                   assigns the result back to the same variable's. Example :
                                   x = x + 1
                                   x += 1
  */

  int x = 10;
  x += 2;
  printf("%d", x);
  return 0;

}