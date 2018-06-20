#include <stdio.h>
 
int main(void) 
{
	int num,n,sum=0;
	printf("enter the number");
	scanf("%d",&num);
	n=num;
	while(num!=0)
	{
		n=num%10;
		sum=sum+n;
		num=num/10;
 
	}
	printf("\n%d",sum);
	return 0;
}
