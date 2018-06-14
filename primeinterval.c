#include<stdio.h>
int main()
{
	int num,i,n,c, m=2 , p=10;
	printf("enter range");
	scanf("%d%",&m,&p);
	printf("\n prime no. between %d and %d are ",m,p);
	for(num=m;num<=p;num++)
	{
		printf("enter limit");
		scanf("%d",&n);
	for(i=1;i<=n;i++){
	 if(n%i==0)
	 {
	 c++;
}
}
if (c==2)
		printf("%d",num);
		
	}return 0;
}
