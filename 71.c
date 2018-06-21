#include<stdio.h>
int main()
{
	char s[100],temp[100];	
	int i,j,n,k;
	printf("enter the string");
	scanf("%s",&s);
	n=strlen(s);
	while(i<j)
	{
		for(i=1;i<n;i++)
		{
			for(j=n;j<=1;j++)
			{
				temp[k]=s[i];
				s[i]=s[j];
				s[j]=s[i];
			}
		}
	}
	printf("\nyes");
	return 0;
}
