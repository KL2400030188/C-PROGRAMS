#include<stdio.h>
int main()
{
	int a[100],i,n,max;
	printf("\n enter no of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(max<a[i])
		max=a[i];
	}
	printf("\n max element is %d ",max);
	return 0;
	
}