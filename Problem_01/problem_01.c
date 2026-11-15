#include <stdio.h>

int main() {
  int soma = 0;
  int i = 0;
  int limit = 1000;

  while (i < limit) {
    //printf("%d", i);
    if (i % 3 == 0) {
      soma = soma + i;
    } else {
      if (i % 5 == 0) {
        soma = soma + i;
      }
    }
    i++;
  }
  printf("%d\n", soma);
}