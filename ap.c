#include<stdio.h>
int main()
{
	int a,n,d,i,tn,sum=0;
	printf("enter the first term");
	scanf("%d",&a);
	printf("enter the terms");
	scanf("%d",&n);
	printf("enetr the common difference");
	scanf("%d",&d);
	sum=(n*(2*a+(n-1)*d))/2;
	tn=a+(n-1)*d;
	printf("sum of series");
	for(i=a;i<=tn;i=i+d)
	
		if(i!=tn)
		printf("%d +",i);
	
	else
	printf("%d=%d",i,sum);
	
	
	return 0;
	
}
