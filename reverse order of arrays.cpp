#include<stdio.h>
int main() 
{
    int a[100], i, n;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    printf("\nEnter the elements:\n");
    for(i = 0; i < n; i++) 
	{
        scanf("%d", &a[i]);
    }
    printf("\nArrays in reverse order:");
    for(i = n - 1; i >= 0; i--)
	{
        printf("%d ", a[i]);
    }
    return 0;
}
