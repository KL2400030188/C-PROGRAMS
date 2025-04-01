#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    switch (n)
    {
        case 1...9 : printf("one digit number");
        break;
        case 10...99 : printf("two digit number");
        break;
        case 100...999 : printf("three digit number");
        break;
        case 1000...9999 : printf("four digit");
        break;
        default : printf("invalid n value");
    }
    return 0;
}