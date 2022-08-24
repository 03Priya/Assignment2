//Program to flip bits of a given integer

#include <stdio.h>

int main()
{
	unsigned int num,flip;
	printf("Enter a number:" );
	scanf("%u",&num);

	flip = ~num;                      //flipping bits using 1's complement

	printf("The number after Flipped: %u\n", flip);
}



