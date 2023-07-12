//3.	Write a program in C to check whether a number is a prime number or not using the function

#include<stdio.h>

void Prime(int num);

int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	Prime(num);
}
void Prime(int num)
{
	int d = 1;
	for (int i = 2; i * i <= num; i++)
	 {
        if (num % i == 0)
		 {
        	d = 0;
        	break;
        }
    	d = 1;
	}
	if(d == 1)
	{
	 printf("Prime number");
	}
	else
	{
		printf("Not a prime number");
	}
}
