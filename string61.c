#include<stdio.h>
int main()
{
	char s[100];
	int i,k;
	printf("enter the string");
	scanf("%s",&s);
	printf("enter the k value");
	scanf("%d",&k);
	for(i=0;i<=k;i++)
	{
		printf("\n%c",s[i]);
		
	}
	return 0;
}
