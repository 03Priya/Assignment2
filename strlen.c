//Program to find the length of the given string

#include <stdio.h>

int my_strlen(const char *str);      //function declaration  

int main()
{
	char str[50];
	int len;

	printf("Enter the string: ");
	scanf("%[^\n]",str);

	len = my_strlen(str);        //function calling

	printf("%d\n",len);
}
	    
int my_strlen(const char *str)       //function definition to find the length of the string
{
        int count = 0;                      
        while(*str++)                //loop till null character
        {
	        count++;             //increment count for every character
        }
        return count;                //return the total count
}
