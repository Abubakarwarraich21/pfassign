#include <stdio.h>

int gcd(int a, int b);

int main()
{
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    int result = gcd(num1, num2);
    
    printf("The GCD of %d and %d is %d\n", num1, num2, result);
    
    return 0;
}

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    return a;
}

