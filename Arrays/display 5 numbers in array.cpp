//1.	Write a program to create a simple array of 5 numbers and display the array.

#include<stdio.h>
int main()
{
	int numbers[5] = {69,42,82,42,69};
	
	for (int i = 0; i <= 4; i++)
	{
		printf("%d ",numbers[i]);
	}
}
