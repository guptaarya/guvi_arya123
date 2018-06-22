#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10],s2[10];
	int i,j,count=0,n1,n2;
	printf("enter the elements");
	scanf("%s%s",&s1,&s2);
	n1=strlen(s1);
	n2=strlen(s2);
	if(n1=n2)
	{
		for(i=0;i<n1;i++)
		{
			if(s1[i]==s2[i])
			{
				count=count+0;
				
			}
			else
			{
				count=count+1;
				
			}
		}
	}
	if(count==1)
	{
		printf("yes");
		
	}
	else
	{
		printf("no");
		
	}
	return 0;
	
}
