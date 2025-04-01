#include<stdio.h>
int main()
{
	int a[100],n,i,l,u,mid,key,search=0;
	printf("\n Enter n value");
	scanf("%d",&n);
	printf("\n enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n enter key value");
	scanf("%d",&key);
	l=0;
	u=n-1;
	while(l<=u)
	{
		mid=(l+u)/2;
		if(key==a[mid])
		{
			search=1;
			break;
		}
		else if(key>a[mid])
		{
			l=mid+1;
		}
		else
		{
			u=mid-1;
		}
	}
	if (search==1)
	{
		printf("\n %d element found at location %d",key,mid);
	}
	else
	{
		printf("\n element not found");
	}
	return 0;
}