#include <stdio.h>


int numbers[4] = {1, 2, 3, 4};

int main () {
  for ( int n=0 ; n<4 ; ++n ) {
    printf("%d\n", numbers[n]); 
  }
  return 0;
}