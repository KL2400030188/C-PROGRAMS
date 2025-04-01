#include<stdio.h>
int main()
{
	int a[100],i,pos,n;
	scanf("%d",&n);
	printf("\n enter elements into the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n enter the position in which element should be deleted");
	scanf("%d",&pos);
	n--;
	for(i=pos-1;i<n;i++)
	{
		a[i]=a[i+1];
	}
	printf("\n after deletion, the array elements are: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}