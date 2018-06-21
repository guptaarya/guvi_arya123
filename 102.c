#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the number");
	scanf("%d",&n);
    while(n%2==0)
    {
    	n=n/2;
	}
	printf("%d",n);
	return 0;
	
}
