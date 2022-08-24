//Program to find high frequency character in a string

#include <stdio.h>
#include <string.h>

char string1[100], visited[100];
int count[100] = {0}, flag = 0;

void main()
{
    int i, j = 0, k = 0, l, max, index;

    printf("Enter a string : ");
    scanf("%[^\n]s", string1);

    l = strlen(string1);                        //finding length of the string

    for (i = 0; i < l; i++)                     //loop through the string
    {
        if (i == 0)
        {
            visited[j++] = string1[i];          //increment count value for first time
            count[j - 1]++;
        }
        else
        {
            for (k = 0; k  < j; k++)
            {
                if (string1[i] == visited[k])   //if character repeats increment count value
                {
                    count[k]++;
                    flag = 1;
                }
            }
            if (flag == 0)
            {
                visited[j++] = string1[i];
                count[j - 1]++;
            }
            flag = 0;
        }
    }    

    for (i = 0; i < j; i++)
    {
        if ((i == 0) && (visited[i] != ' '))
        {
            max = count[i];
            continue;
        }
        if ((max < count[i]) && (visited[i] != ' '))
        {
            max = count[i];
            index = i;
        }
    }
    printf("\nMax repeated character in the string = %c ", visited[index]);
    printf("\nIt occurs %d times\n", count[index]);
}
