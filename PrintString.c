#include "stdio.h"


int main(){

	//variable which can hold characters
	char string[5];
	printf("Please enter the string : ");

	scanf("%s", string);

	printf("Input string : %s ", string);


	//check for character
	char a;

	printf("\nPlease enter the character : \n");

	scanf(" %c", &a);
	printf("\nPrinting character : %c \n", a);

	return 0;
}
