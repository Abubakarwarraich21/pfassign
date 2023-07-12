//2.	Write a program in C to check a given number is even or odd using the function.

#include<stdio.h>

void EvenorOdd(int num);

int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	EvenorOdd(num);
}
void EvenorOdd(int num)
{
	if(num%2==0)
	{
		printf("Even number");
	}
	else
	{
		printf("Odd number");
	}
}
