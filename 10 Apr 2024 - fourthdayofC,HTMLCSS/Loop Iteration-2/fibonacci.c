#include<stdio.h>
int main()
{
	int a,b,c,i,terms;
	printf("Enter the terms::");
	scanf("%d",&terms);
	a=0;
	b=1;
	c=0;
	for(i=0;i<=terms;i++)
	{
		printf("%d ",c);
		a=b;
		b=c;
		c=a+b;
		
}
	}

