//1.	Write a program in C to swap two numbers using function.

#include<stdio.h>

void swapnumbers(int num1,int num2);

int main()
{
	int num1,num2;	
	printf("Enter value of num1: \n");
	scanf("%d", &num1);
	
	printf("Enter value of num2: \n");
	scanf("%d", &num2);
	
	swapnumbers(num1,num2);	
}
void swapnumbers(int num1,int num2)
{
	
	int temp;
	temp = num1;
	num1=num2;
	num2=temp;
	
	printf("%d and %d", num1,num2);
}
	
