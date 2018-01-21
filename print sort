#include <stdio.h>
#define MAXSIZE 10
 
void main()
{
    int array[MAXSIZE];
    int i, j, number, temp;
 
    printf("Enter the values of num \n");
    scanf("%d", &number);
    printf("Enter the element one by one \n");
    for (i = 0; i < number; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Input array is \n");
    for (i = 0; i < number; i++)
    {
        printf("%d\n", array[i]);
    }
    for (i = 0; i < number; i++)
    {
        for (j = 0; j < (number - i - 1); j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    printf("Sorted array is...\n");
    for (i = 0; i < number; i++)
    {
        printf("%d\n", array[i]);
    }
}
