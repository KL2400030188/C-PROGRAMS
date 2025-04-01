#include <stdio.h>
int main() 
{
    int n, sum, digit;
    printf("Enter a number: ");
    scanf("%d", &n);
        if (n < 0) {
        n = -n;
    }

       while (n >= 10) 
	{
        sum = 0;  
        while (n > 0) 
		{
            digit = n % 10;  
            sum += digit;    
            n /= 10;         
        }

       
        n = sum;
    }
    if (n == 1) 
	{
        printf("The number is a magic number.\n");
    } else 
	{
        printf("The number is not a magic number.\n");
    }

    return 0;
}
