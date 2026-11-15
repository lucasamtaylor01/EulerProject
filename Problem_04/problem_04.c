#include <stdio.h>
#include <math.h>

int three_digits_multiplier(){
	int i, j, k;
	int limit = 100;
	i = 999;
	j = 999;
	
	while (i >= limit){
		while (j >= limit){
			k = i * j;
			j--;
			printf("%d x %d = %d\n", i, j, k); 
		}
		j = 999;
		i--;	
	}

	return 0;
}

int is_palindrome(int n){
	return 0;
}
int digit_counter(int n){
	int divisor = 1;
	int counter = 1;
	while (n > 1){
		n = n / divisor;
		counter++;
		divisor = divisor*10;
	}

	return counter;
}


int main(){
	three_digits_multiplier();
}

