#include<stdio.h>
#include<math.h>
int main()
{
	int n,t,sum,digit;
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		digit=n%10;
		sum=sum+pow(digit,3);
		n=n/10;
	}
	printf("sum=%d\n",sum);
	if(sum==t)
	{
		printf("\n IT's an Armstrong number");
	}
	else
	{
		printf("\n IT's not an Armstrong number");
	}
	return 0;
}