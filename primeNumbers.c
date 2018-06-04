/**
	Program to print prime number till input N.
*/

#include <stdio.h>

int main(){

	int limit;
	int num;
	int count = 1, index = 0;
	//take input
	scanf(" %d", &limit);

	//print all the prime numbers till limit
	for(num = 2; num <= limit; num++){
		count = 1;
		index = 0;
		for(index = 1; index <= num/2 ; index++){
			if(count > 2){
				break;
			}
			//printf("\n %d divided by %d",num,index);
			if(num % index == 0){
				count = count + 1;
			}
		}
		//printf("\ncount for %d is %d ",num,count);
		if(count <= 2){
			printf("%d ", num);
		}
	}

	return 0;
}
