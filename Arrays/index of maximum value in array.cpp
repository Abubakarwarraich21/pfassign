//5.	Write a program to ask user to enter 5 numbers in a array, and find the index of maximum value in array

#include <stdio.h>

int main()
{
    int numbers[5]; 
    
    printf("Enter 5 numbers: ");
    
    for (int i = 0; i < 5; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    int maxIndex = 0;
    
    for (int i = 1; i < 5; i++)
    {
        if (numbers[i] > numbers[maxIndex])
        {
            maxIndex = i;
        }
    }
    printf("The index of the maximum value in the array is: %d\n", maxIndex);
    return 0;
}

