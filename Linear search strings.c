#include<stdio.h>
#include<string.h>
int main()
{
	char str[10][50], key[50];
	int n,i,search=0;
	printf("\n Enter n value");
	scanf("%d",&n);
	printf("\n enter %d strings",n);
	for(i=0;i<n;i++)
	{
		scanf("%s",str[i]);
	}
	printf("\n enter key value");
	scanf("%s",key);
	for(i=0;i<n;i++)
	{
		if (strcmp(key,str[i])==0)
		{
			search=1;
			break;
		}
	}
	if (search==1)
	{
		printf("\n given string is found");
	}
	else
	{
		printf("\n given string is  not found");
	}
	return 0;
}