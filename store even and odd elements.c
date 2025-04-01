#include<stdio.h>
int main()
{
    int a[100], even[100], odd[100], i, n, ec = 0, oc = 0;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);   
    printf("\nEnter the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0)
        {
            even[ec] = a[i];  
            ec++;  
        }
        else
        {
            odd[oc] = a[i];   
            oc++;  
        }
    }  
    printf("\nEven elements: ");
    for(i = 0; i < ec; i++)
    {
        printf("%d ", even[i]);
    }

    printf("\nOdd elements: ");
    for(i = 0; i < oc; i++)
    {
        printf("%d ", odd[i]);
    }
    return 0;
}

