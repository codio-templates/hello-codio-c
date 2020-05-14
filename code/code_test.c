#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char **argv) 
{ 
  int num = atoi(argv[1]); // typecast the string to an int
      
  printf("%d\n", num * 3); // print the int multiplied by 3
  return 0; 
} 