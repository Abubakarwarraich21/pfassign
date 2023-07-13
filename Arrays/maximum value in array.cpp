//3.	Write a program to ask user to enter 5 numbers in a array, and find the maximum value in array

#include<stdio.h>
int main()
{
	int numbers[5],maximum=0;
	for(int i=0;i<=4;i++)
	{
		scanf("%d", &numbers[i]);
	}
	for(int j=0;j<=4;j++)
	{
		if(numbers[j]>maximum)
		{
			maximum=numbers[j];
		}
	}
	printf("%d is the maximum value", maximum);
}
