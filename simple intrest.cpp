#include <stdio.h>
int main()
{
int p;
float t,r, si;
printf("\n enter p value: ");
scanf("%d",&p);
printf("\n enter t value: ");
scanf("%f",&t);
printf("\n enter r value: ");
scanf("%f",&r);
si = (p*t*r)/100;
printf("\n si: %f", si);
return 0;
}