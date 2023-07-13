//7.	Write a program to sum all numbers of an array and display the sum 

#include <stdio.h>

int main()
{
    int numbers[5]; 
    
    printf("Enter 5 numbers: ");
    
    for (int i = 0; i < 5; i++)
    {
        printf("Number %d: ", i);
        scanf("%d", &numbers[i]);
    }
    
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += numbers[i];
    }
    printf("The sum of the array is: %d\n", sum);
    return 0;
}




