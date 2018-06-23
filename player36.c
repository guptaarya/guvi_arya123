#include<stdio.h>
int main()
{
	int n,k,rem,count=0;
	printf("enter the value of n and k");
	scanf("%d%d",&n,&k);
	while(n!=0)
	{
		rem=n%10;
		if(rem==k)
		{
			count=count+1;
			
		}
		n=n/10;
	}
	printf("%d",count);
	return 0;
	
}
