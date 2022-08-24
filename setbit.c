//Program to find set/reset bit in a given position of a number

#include <stdio.h>

int main()
{
	int num, n;
	printf("Enter a number: ");             //Fetching number and position from the user
	scanf("%d",&num);
	printf("Enter the position: ");
	scanf("%d",&n);

	if(num & (1 << n))                      //Using AND operation, finding the bit is set or not
	{
		printf("%d bit is set bit\n",n);
	}
	else
	{
		printf("%d bit is reset bit\n",n);
	}
}
