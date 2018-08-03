/* A C program demonstrating the Euclidian Algorithm.
   Written by Cohen Robinson on the 03/08/2018 */

#include <stdio.h>
#include <stdlib.h>

int gcd();

int main(int argc, char **argv) {

  printf("GREATEST COMMON DIVISOR FINDER\n");
  printf("\nEnter two integers: ");

  int int_a, int_b;

  if(!scanf("%d %d", &int_a, &int_b)) {

    printf("ERROR: You have not entered a correct input.\n");
    exit(EXIT_FAILURE);
  }

  printf("\ngcd(%d, %d) = %d\n", int_a, int_b, gcd(int_a, int_b));
  return 0;

}

int gcd( int_a, int_b){

  /* Calculates the gcd of two integers */

  if(int_b < int_a) {

    /* Makes sure one is strictly greater than the other (or equal) */

    int temp_int = int_b;
    int_b = int_a;
    int_a = temp_int;
  }

  int r, q;

  while(1) {

    r = int_a % int_b;
    q = (int_a - r) / int_b;

    if(r == 0){

      return int_b;
    }

    int_a = int_b;
    int_b = r;
  }
}

