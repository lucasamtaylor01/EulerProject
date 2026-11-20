#include <stdio.h>

#include "problem_04.h"

int main() {
  int i, j, k;
  i = 999;
  j = 999;
  int palindrome = 0;
  int max = 0;

  // Check every product of two three-digit numbers.
  while (i >= 100) {
    while (j >= 100) {
      k = i * j;
      palindrome = is_palindrome(k);
      if (palindrome == 1) {
        // Keep the largest palindrome found.
        if (k > max) {
          max = k;
        }
        palindrome = 0;
      }
      j--;
    }
    j = 999;
    i--;
  }

  printf("The largest palindrome is: %d\n", max);
  return 0;
}