#include<stdio.h>
int main()
{
	float u,a,t,vel;
	scanf("%f %f %f",&u,&a,&t);
	vel=u+(a*t);
	printf("velocity:%.2f",vel);
	return 0;
}