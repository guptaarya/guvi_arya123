#include<stdio.h>
int main()
{
	int l,b,h,v,t;
	printf("enter the number");
	scanf("%d %d %d",&l,&b,&h);
	v=l*b*h;
	t=2*((l*b)+(b*h)+(l*h));
	printf("\nvolume is %d",v);
	printf("\ntotal is %d",t);
	return 0;
}
