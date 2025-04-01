#include<stdio.h>
int main()
{
	int a[5]={1,0,1,0,1};
	int oc=0,ec=0;
	a[0]==0 ? oc++ : ec++;
	a[1]==0 ? oc++ : ec++;
	a[2]==0 ? oc++ : ec++;
	a[3]==0 ? oc++ : ec++;
	a[4]==0 ? oc++ : ec++;
	printf("\n oc=%d",oc);
	printf("\n ec=%d",ec);
	return 0;
}