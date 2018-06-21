#include<stdio.h>
#include<string.h>
int main()
{
	char s[10];
	int i,n,flag=0;
	printf("enter the binary value");
	scanf("%s",&s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
	if(s[i]=='0' || s[i]=='1')
	{
		flag=1;
	}
	else
	{
	flag =0;
	break;
	}
}
	if(flag==1)
	{
		printf("yes");
	}
	return 0;
}
