//4.	Write a program to ask user to enter 5 numbers in an array, and find the second largest value in array

#include<stdio.h>
int main()
{
	int numbers[5],second_largest=0;
	for(int i=0;i<=4;i++)
	{
		scanf("%d", &numbers[i]);
	}
	for(int j=0;j<=4;j++)
	{
	 printf("Number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }
    
    int largest = numbers[0];
    int secondLargest = numbers[0];
    
  
    for (int i = 1; i < 5; i++)
    {
        if (numbers[i] > largest)
        {
            secondLargest = largest;
            largest = numbers[i];
        }
        else if (numbers[i] > secondLargest && numbers[i] < largest)
        {
            secondLargest = numbers[i];
        }
    }
    printf("The second largest value in the array is: %d\n", secondLargest);
    return 0;
}

