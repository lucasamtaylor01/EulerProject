#include <stdio.h>

int main() {
  int a = 1;
  int b = 2;
  int c = a + b;
  int limit = 4000000;
  int sum = b;
  // int n_elements = 3;
  // int limit_n_elements = 10;

  while (c < limit) {
    a = b;
    b = c;

    c = a + b;
    if (c % 2 == 0) {
      sum = sum + c;
    }
    printf("%d\n", c);
  }
  printf("SUM: %d\n", sum);
}