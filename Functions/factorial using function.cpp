//4.	Ask user to enter a number and print its factorial using functions. 

#include<stdio.h>

int factorial(int num);

int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d", &num);
	
		
	int fact = factorial(num);;
	printf("factorial of %d is %d", num,fact);
}
int factorial(int num)
{
	int fact = 1;
	for(int i=1;i<=num;i++)
	{
	fact=fact*i;
	}
	return fact;
}
