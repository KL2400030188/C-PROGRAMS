#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if ((n&(n-1))==0)
	{
		printf("\n given no is power of 2");
	}
	else
	{
		printf("\n given no is not a power of 2");
	}
	return 0;
}