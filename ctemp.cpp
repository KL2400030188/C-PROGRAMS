#include <stdio.h>
int main()
{
    float ftemp, ctemp;
    scanf("%f", &ftemp);
    ctemp = (ftemp - 32) * (5/9);
    printf("%f\n", ftemp);
    printf("%f\n", ctemp);
    return 0;
}
