#include<stdio.h>
int main()
{
	int a[100],n,i,key,search=0;
	printf("\n Enter n value");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n enter key value");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if (key==a[i])
		{
			search=1;
			break;
		}
	}
	if (search==1)
	{
		printf("\n element found");
	}
	else
	{
		printf("\n element not found");
	}
	return 0;
}