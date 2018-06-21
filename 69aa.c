#include<stdio.h>
int main()
{
	int n,m,even,odd,a;
	printf("enetr the value of n and m");
	scanf("%d%d",&n,&m);
	a=n+m;
	if(a%2==1)
	{
		printf("odd");
	}
	else
	{
		printf("even");
	}
	return 0;
}
