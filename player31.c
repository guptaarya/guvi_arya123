#include<stdio.h>
int main()
{
	char s[10];
	int i,count1=0,count2=0;
	printf("enter the string");
	scanf("%d",s);
	for(i=0;s[1]='\0';i++)
	{
		if(s[i]=='(')
		{
			count1=count1+1;
			
		}
		else if(s[i]==')')
		{
			count2=count2+1;
			
	}
		}
		if(count1==count2)
		{
			printf("yes");
			
		}
		else
		{
			printf("no");
		}
	return 0;
}
