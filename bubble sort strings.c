#include<stdio.h>
#include<string.h>

int main()
{
    char str[10][50], t[50];  
    int n, i, p;

    printf("\n Enter n value: ");
    scanf("%d", &n);

    printf("\n Enter %d strings:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }

        for(p = 1; p < n; p++)
    {
        for(i = 0; i < n - p; i++)
        {
            if(strcmp(str[i], str[i+1]) > 0)  
            {
                strcpy(t, str[i]);
                strcpy(str[i], str[i+1]);
                strcpy(str[i+1], t);
            }
        }
    }

    printf("\n The strings in alphabetical order are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%s\n", str[i]);
    }

    return 0;
}
