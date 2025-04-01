#include<stdio.h>
int main()
{
	int a[100],i,pos,n,elem;
	scanf("%d",&n);
	printf("\n enter elements into the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n enter element to be inserted");
	scanf("%d",&elem);
	printf("\n enter the position in which element should be inserted");
	scanf("%d",&pos);
	n++;
	for(i=n-1;i>=pos;i--)
	{
		a[i]=a[i-1];
	}
	a[pos-1]=elem;
	printf("\n after inserting, the array elements are: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}