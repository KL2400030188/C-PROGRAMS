#include<stdio.h>
int main()
{
	int dayno;
	scanf("%d",&dayno);
	if (dayno==1)
	{
		printf("sunday");
	}
	if (dayno==2)
	{
		printf("monday");
	}
	if (dayno==3)
	{
		printf("tuesday");
	}
	if (dayno==4)
	{
		printf("wednesday");
	}
	if (dayno==5)
	{
		printf("thursday");
	}
	if (dayno==6)
	{
		printf("friday");
	}
	if (dayno==7)
	{
		printf("saturday");
	}
	else if(dayno>=8)
	{
		printf("invalid dayno");
	}
	return 0;
}