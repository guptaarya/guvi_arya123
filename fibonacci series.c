#include<stdio.h>
int main()
{
	int i,n,t1=0,t2=1,nt;
	printf("enter the number");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(i<=1)
		nt=i;
		else
		{
			nt=t1+t2;
			t1=t2;
			t2=nt;
	}
	printf("%d\n",nt);
}
return 0;
}
