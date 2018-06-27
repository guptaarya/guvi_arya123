#include<stdio.h>
int main()
{
	int n,rem,count=0,i,sum,a[100];
	printf("enter the value of n");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		a[i]=rem;
		i++;
		count=count+1;
		n=n/10;
	}
	sum=a[0]+a[ount-1];
	printf("%d",sum);
	return 0;
}
