#include <stdio.h>

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

int is_palindrome(int original_n) {
  int ind = 0;
  int n = original_n;
  int array_size = digit_counter(n);
  int divisor = array_size - 1;
  int number_array[array_size];
  int digit;
  int i = 0;

  while (i < array_size) {
    digit = n / power(10, divisor);
    number_array[i] = digit;
    i++;
    n = n % power(10, divisor);
    divisor--;
  }

  int j = 0;
  int k = array_size - 1;
  int half_array = array_size / 2;

  while (j <= half_array) {
    if (number_array[j] != number_array[k]) {
      break;
    } else {
      j++;
      k--;

      if (j == half_array) {
        ind = 1;
      }
    }
  }
  return ind;
}

int main() {
  int i, j, k;
  i = 999;
  j = 999;
  int palindrome = 0;
  int max = 0;

  while (i >= 100) {
    while (j >= 100) {
      k = i * j;
      palindrome = is_palindrome(k);
      if (palindrome == 1) {
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