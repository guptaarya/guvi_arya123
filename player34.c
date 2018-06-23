#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i,n;
	printf("enter the string");
	scanf("%d",&a);
	n=strlen(a);
	for(i=0;i<n;i=i+3)
	{
		printf("%c",a[i+3]);
		
	}
	return 0;
	
}
