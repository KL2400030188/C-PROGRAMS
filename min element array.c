#include<stdio.h>
int main()
{
	int a[100],i,n,min;
	printf("\n enter no of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=1;i<n;i++)
	{
		if(min>a[i])
		min=a[i];
	}
	printf("\n min element is %d ",min);
	return 0;
	
}