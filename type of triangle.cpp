#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (a==b&&b==c)
	{
		printf("equilateral triangle");
	}
	if (a==b||b==c||a==c)
	{
		printf("isoceless triangle");
	}
	else
	{
		printf("scalene triangle");
	}
	return 0;
}