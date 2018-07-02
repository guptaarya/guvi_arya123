#include<stdio.h>
int main()
{
	int a[100];
	int i,n,j,count=0,temp;
	printf("enter the number of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			printf("%d",a[i]);
			if(a[i]==a[j])
			{
			count=count+1;
			
	}
}
}
	printf("%d",count);
	
	return 0;
}
