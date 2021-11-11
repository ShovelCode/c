//character arrays as strings
#include <stdio.h>
#define SIZE 20

int main (void){
  char string1[ SIZE ];
  char string2[] = "string literal"; //15 characters

  size_t i; //counter

  printf("%s", "Enter a string (no longer than 19 characters): " );

  scanf("%19s", string1); //take in up to 19 characters

  for(i = 0; i < SIZE && string1[i] != '\0'; ++i) {
    printf("%c ", string1[i]);
  }
}
