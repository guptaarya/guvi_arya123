#include<stdio.h>
int main()
{
	int n,k,p=1,i;
	printf("enter the value of n and k");
	scanf("%d%d",&n,&k);
	for(i=0;i<k;i++)
	p=p*n;
	printf("\n%d",p);
	return 0;
}
