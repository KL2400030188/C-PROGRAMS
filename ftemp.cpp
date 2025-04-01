#include <stdio.h>
int main()
{
    float ftemp, ctemp;
    scanf("%f", &ctemp);
    ftemp = (ctemp*9/5)+32;
    printf("%f\n", ctemp);
    printf("%f\n", ftemp);
    return 0;
}