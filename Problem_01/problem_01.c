#include <stdio.h>

int main() {
  int soma = 0;
  int i = 0;
  int limit = 1000;

  // Check every number below the limit.
  while (i < limit) {
    //printf("%d", i);
    // Add numbers that are multiples of three.
    if (i % 3 == 0) {
      soma = soma + i;
    } else {
      // Add multiples of five that are not also multiples of three.
      if (i % 5 == 0) {
        soma = soma + i;
      }
    }
    i++;
  }
  printf("%d\n", soma);
}