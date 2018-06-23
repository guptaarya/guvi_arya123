#include <stdio.h>
#include<string.h>
int main(void) 
{
	char s1[20],s2[20];
	int i,flag;
	scanf("%s %s",s1,s2);
	int l1,l2;
	l1=strlen(s1);
	l2=strlen(s2);
	if(l1==l2)
	{
		for(i=0;i<l1;i++)
		{
			if(s1[i]=s2[i])
			{
				flag=0;
			}
			else
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			printf("no");
		}
		else
		{
			printf("yes");
		}
	}
	else
	{
		printf("no");
	}
	return 0;
}
