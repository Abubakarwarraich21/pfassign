//9.	Find sum of all numbers on even indexes of the array. 

#include <stdio.h>

int main()
{
    int numbers[5]; 
    
    printf("Enter 5 numbers:\n");
    
    for (int i = 0; i < 5; i++)
    {
        printf("Number %d: ", i);
        scanf("%d", &numbers[i]);
    }
    int sum = 0;
    
    for (int i = 0; i < 5; i += 2)
    {
        sum += numbers[i];
    }
    printf("The sum of numbers at even indexes in the array is: %d\n", sum);
    return 0;
}

