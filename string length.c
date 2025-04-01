#include<stdio.h>
int main()
{
	char str[100];
	int i,len=0;
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		len++;
	}
	printf("\n length of string=%d",len);
	return 0;
}