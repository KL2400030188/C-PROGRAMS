#include<stdio.h>

int main()
{
	char str[100];
	printf("\n enter a string");
	scanf("%[^\n]s",str);
	printf("The given string is: %s",str);
	
}