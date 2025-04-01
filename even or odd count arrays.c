#include<stdio.h>
int main()
{
	int a[100],i,n,ec=0,oc=0;
	printf("\n enter no of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		{
			ec++;
		}
		else
		{
			oc++;
		}
	}
	printf("\n even count= %d",ec);
	printf("\n odd count= %d",oc);
	return 0;
}
