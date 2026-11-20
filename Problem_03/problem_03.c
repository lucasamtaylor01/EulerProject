#include <stdio.h>

int main() {
  int divisor = 2;
  long int number = 600851475143;
  int max = divisor;

  // Remove factors until no number greater than one remains.
  while (number != 1) {
    // Divide completely when the divisor is a factor.
    if (number % divisor == 0) {
      number = number / divisor;
    } else {
      divisor++;
    }

    // Keep the largest divisor found.
    if (max < divisor) {
      max = divisor;
    }
  }

  printf("Biggest prime: %d\n", max);
}