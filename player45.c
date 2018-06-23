#include<stdio.h>
int main()
{
	int p,a,peri,area,l,b,flag=0;
	printf("enter the value of p and a");
	scanf("%d%d",&p,&a);
	for(l=1;l<=(p/2);l++)
	{
		for(b=1;b<=(p/2);b++)
		{
			peri=2*(l+b);
			area=l*b;
			if(peri==p && area==a)
			{
				flag==1;
			}
		}
	}
	if(flag==1)
	{
		printf("yes");
		
	}
	else
	{
		printf("no");
		
		
	}
	return 0;
}
