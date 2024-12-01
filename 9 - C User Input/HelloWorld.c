#include <stdio.h>
#include <unistd.h>

int main (){
  char name[25]; //bytes 
  int age;

  printf("\nWhat's your name? ");
  scanf("%[^\n]", &name);

  printf("\nHow old are you? ");
  scanf("%d", &age);

  printf("\nHello %s, how are you? \n", name);
  printf("\nYou are %d years old \n", age);

  sleep(5);
  return 0;
}