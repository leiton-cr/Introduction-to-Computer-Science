#include <string.h>
#include <stdio.h>
#include <cs50.h>

#include <ctype.h>

int main (int argc, string argv []) {
  if(argc != 2){
      printf("Missing comand-line argument");
      return 1;
  }

  printf("Hello, %s \n", argv[1]);
  return 0;
}

