#include<stdio.h>
#define size 8
int main()
{
	char binary[size+1],onescom[size+1],twoscom[size+1];
	int i,carry=1;
	printf("enter the binary::");
	gets(binary);
	for(i=0;i<size;i++)
	{
		if(binary[i]=='0')
		{
			onescom[i]='1';
		}
		else if(binary[i]=='1')
		{
			onescom[i]='0';
		}
	}
	onescom[size]='\0';

	for(i=size-1;i>=0;i--)
	{
		if(onescom[i]=='1' && carry==1)
		{
			twoscom[i]='0';
		}
		else if(onescom[i]=='0' && carry==1)
		{
			twoscom[i]='1';
			carry=0;
		}
		else
		{
			twoscom[i]=onescom[i];
		}
		
}
twoscom[size]='\0';
	printf("Ones complement is %s\n",onescom);
	printf("Twos complement is %s",twoscom);	
}







