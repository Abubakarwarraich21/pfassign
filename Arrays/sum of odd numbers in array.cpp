//8.	Write a program to find sum of all odd numbers in the array.

#include <stdio.h>

int main()
{
    int numbers[5]; 
    
    printf("Enter 5 numbers:\n");
    
    // Input numbers into the array
    for (int i = 0; i < 5; i++)
    {
        printf("Number %d: ", i);
        scanf("%d", &numbers[i]);
    }
    int sum = 0;
    
    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] % 2 != 0)
        {
            sum += numbers[i];
        }
    }
    printf("The sum of all odd numbers in the array is: %d\n", sum);
    return 0;
}

