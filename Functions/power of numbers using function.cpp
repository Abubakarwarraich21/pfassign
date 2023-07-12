//5.	Ask user to enter two numbers and find their power using functions.

#include<stdio.h>
#include<math.h>

int power(int n,int p);

int main()
{
	int n,p,x;
	printf("Enter a number : ");
	scanf("%d", &n);
	
	printf("Enter another number : ");
	scanf("%d", &p);
	
	x = power (n,p);
	printf("The power of number is %d", x);
}
int power(int n,int p)
{
	int x;
	x=pow(n,p);
	
	return x;
}
