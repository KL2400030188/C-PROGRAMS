#include<stdio.h>
int main()
{
	int a[100],i,t,n,p;
	scanf("%d",&n);
	printf("\n enter elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(p=1;p<n;p++)
	{
		for(i=0;i<n-p;i++)
		{
			if(a[i]>a[i+1])
		{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
	    }
	}
	printf("\n after sorting the elements are: ");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}