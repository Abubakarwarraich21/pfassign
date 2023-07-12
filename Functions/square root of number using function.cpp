//6.	Ask user to enter a number and find its square root using functions.

#include<stdio.h>
#include<math.h>

int sqrot(int n);

int main()
{
	int n,x;
	printf("Enter a number : ");
	scanf("%d", &n);
	
	x=sqrot(n);
	printf("the square root of number is %d", x);
}
int sqrot(int n)
{
	int x;
	x=sqrt(n);
	
	return x;
}

