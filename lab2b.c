#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){
	unsigned short in = 0.0;
	unsigned int mask = 32768;  // used in bitwise to check bit
	int choice = 0;
	int i = 15;
	int result[15] = {15};

	printf("\nPlease input a number to be displayed in binary format: ");
	scanf("%hu",&in);
	
	printf("\nHow would you like the binary representation to be calculated?");
	printf("\n1) Arithmetic Operations \n2) Bitwise Operations \n> ");
	scanf("%d",&choice);

	if(choice == 1){
		while(i >= 0){
			result[i] = in % 2;  //performs the division operations for decimal to binary
			in /= 2;              //stores the results backwards
			i--;
		}
		i = 0;
		printf("\nBinary result: ");
		while(i < 16){
			printf("%d",result[i]);       //prints result from array
			i++;
		} 
		printf("\n\n");

	}

	if(choice == 2){

		printf("\nBinary result: ");
		while(mask>0)
		{
			if((in & mask) == 0)  //bits are anded and compared to zero
				printf("0");  //prints 0 if both bits were zero
			else
				printf("1");  //otherwise results in a 1
			mask = mask >> 1;  //shifts the bit right
		}
		printf("\n\n");
	}

}
