#include<stdio.h>
int main()
{
	float a,b,c,d,e;
	int sum;
	float avg;
	printf("enter a value: ");
	scanf("%f",&a);
	printf("enter b value: ");
	scanf("%f",&b);
	printf("enter c value: ");
	scanf("%f",&c);
	printf("enter d value: ");
	scanf("%f",&d);
	printf("enter e value: ");
	scanf("%f",&e);
	sum= a+b+c+d+e;
	avg= (a+b+c+d+e)/5;
	printf("sum:%d",sum);
	printf("\navg:%f",avg);
	return 0;
}