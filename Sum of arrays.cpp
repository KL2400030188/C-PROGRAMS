#include<stdio.h>
int main()
{
	int a[100],i,n,sum=0;
	printf("\n enter n value");
	scanf("%d",&n);
	printf("\n enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("\n sum = %d",sum);
	return 0;
}