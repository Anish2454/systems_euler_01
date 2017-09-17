#include <stdio.h>

//brute-force. Go thorugh all numbers [0, 1000)
//check if divisible by 3 or 5
//if true, add to the sum
int problem_one(){
	int sum = 0;
	int i;
	for(i = 0; i < 1000; i++)
		if(i % 3 == 0 || i % 5 == 0) sum += i;
	return sum;
}

//Start from 20. Since the number must be divisible by 20, we can increment by 20
//For each number, check if it's divisible by the
//numbers in [11,13,14,16,17,18,19]
int problem_five(){
	int i = 20;
	while(1){
		int j;
		int divisible = 1;
		for(j = 11; j < 20; j++){
			if(j == 12 || j == 15) continue;
			if(i%j != 0){
				divisible = 0;
				break;
			}
		}
		//if divisible == 1, the for loop went thorugh without breaking.
		if(divisible == 1) return i;
		i += 20;
	}
	return -1;
}

//We go thorugh all the numbers in [1, 100].
//We add each one to square_sum
//and add the square of each one to sum_squares
//at the end, sqaure_sum is only the sum of all the numbers, so we square it.
int problem_six(){
	int sum_squares = 0;
	int square_sum = 0;
	int i;
	for(i = 1; i <= 100; i++){
		square_sum += i;
		sum_squares += (i*i);
	}
	square_sum = square_sum * square_sum;
	return square_sum - sum_squares;
}

int main(){
	printf("Problem One: %d \n", problem_one());
	printf("Problem Five: %d \n", problem_five());
	printf("Problem Six: %d \n", problem_six());
}
