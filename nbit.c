#include <stdio.h>

int set_bit(unsigned int num, unsigned int n);
int main()
{
	unsigned int num, n, result;
	printf("Enter a number: ");
	scanf("%u", &num);
        printf("Enter the position: ");
	scanf("%u", &n);
	result = set_bit(num, n);
	result ? printf("%d bit is set bit\n",n) : printf("%d bit is reset bit\n",n);
}
  

int set_bit(unsigned int num, unsigned int n)
{
	if(num & ( 1 << (31 - n)))	
        {
	       return 1;
	}
	else
	{
		return 0;
	}
}


