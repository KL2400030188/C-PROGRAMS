#include<stdio.h>
int main()
{
    int a[100], sum = 0, i, n;
    float mean;
    printf("\nEnter n value: ");
    scanf("%d", &n);  
    printf("\nEnter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    mean = (float)sum / n;  
    printf("\nMean = %.2f", mean);  
    return 0;
}
