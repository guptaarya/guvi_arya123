#include<stdio.h>
int main()
{
	int a,b,c,ans;
	printf("enter the value of a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	ans=a*b%c;
	printf("\n%d",ans);
	return 0;
}
