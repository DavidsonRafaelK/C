#include <stdio.h>
int main(){

  /* Escape Sequence = Character combination consisting a backslash \
                       Followed by a letter or combination of digits.
                       They specify actions within a line or String of text.
                       \n   = newline                       \e   = Escape Character
                       \t   = tab                           \f   = Formfeed Page Break
                       \a   = Alert                         \v   = Vertical Tab
                       \b   = Backspace                     \?   = Question Mark
                       \nnn = The byte whose numerical      \xhh = The byte whose numerical value
                              value is intepreted as an            value is intepreted as an 
                              given Octal num.                     Hexadecimal num.
                              
  Visit : [Escape Secuences - GeeksforGeeks](https://www.geeksforgeeks.org/escape-sequence-in-c/)

  */
  printf("\"I like Pizza\" - Abraham Lincoln Probably");
  return 0;

}