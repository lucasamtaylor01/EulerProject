#include <stdio.h>

int main(){
	int divisor = 2;
	long int number = 600851475143;
	int max = divisor; 
		
	while(number != 1){
		if(number % divisor == 0){
			number = number / divisor;
		}
		else{
			divisor++;
		}

		if (max < divisor){
			max = divisor;
		}
	}

	printf("Biggest prime: %d\n", max);
} 
