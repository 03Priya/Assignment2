#include <stdio.h>

unsigned int reverseBits(unsigned int num)          // Function to reverse bits of num
{
    unsigned int NO_OF_BITS = sizeof(num) * 8;
    unsigned int reverse_num = 0;
    int i;
    for (i = 0; i < NO_OF_BITS; i++)
    {
        if ((num & (1 << i)))                       // Reversing 1 if the bit is 1
	{
            reverse_num |= 1 << ((NO_OF_BITS - 1) - i);
	}
    }
    return reverse_num;
}

int main()
{
    unsigned int x;
    printf("Enter a number: ");
    scanf("%u",&x);
    printf("%u ", reverseBits(x));                // Function calling
}
