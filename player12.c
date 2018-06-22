#include<stdio.h>
int main()
{
	int n,k,s[10],i,t;
	printf("enter the value of k and n");
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
		
	}
	for(i=0;i<k;i++)
	{
		t=s[i];
		s[i]=s[i+1];
		s[i+1]=t;
		
	}
	for(i=0;i<n;i++)
	{
		printf("%d",s[i]);
		
	}
	
	return 0;
}
