//2.	Write a program to create an array of 5 floats and display them

#include<stdio.h>
int main()
{
	float numbers[5]={1.0,2.0,3.0,4.0,5.0};
	for(int i=0;i<=4;i++)
	{
		printf("%.1f ", numbers[i]);
	}
	return 0;
}
