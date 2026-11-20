#include <stdio.h>

int three_digits_multiplier() {
  int i, j, k;
  int limit = 100;
  i = 999;
  j = 999;

  while (i >= limit) {
    while (j >= limit) {
      k = i * j;
      j--;
      printf("%d x %d = %d\n", i, j, k);
    }
    j = 999;
    i--;
  }

  return 0;
}

int fill_array(int n) {

  int array_size = digit_counter(n);
  int divisor = array_size - 1;
  int number_array[array_size];
  int digit;
  int j = 0;

  while (j < array_size) {
    digit = n / power(10, divisor);
    number_array[j] = digit;
    j++;
    n = n % power(10, divisor);
    divisor--;
  }

  return number_array;
}

int digit_counter(int n) {
  int divisor = 10;
  int counter = 1;
  while (1) {
    if (n / divisor < 1) {
      break;
    } else {
      divisor = divisor * 10;
      counter++;
    }
  }
  return counter;
}

int power(int base, int exponent) {
  int i;
  int base_power = 1;
  for (i = 1; i <= exponent; i++) {
    base_power = base_power * base;
  }

  return base_power;
}

int main() {
  fill_array(1472);
}