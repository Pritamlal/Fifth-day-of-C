#include<stdio.h>

int main()
{
	int octalconstant[]={0,1,10,11,100,101,110,111};
	long long binary,tempbinary,octal=0;
	int place=1,digit,i;
	
	printf("Enter the binary number::");
	scanf("%d",&binary);
	
	tempbinary=binary;
	while(tempbinary>0)
	{
		digit=tempbinary%1000;
		
		for(i=0;i<8;i++)
		{
			if(octalconstant[i]==digit)
			{
				octal=octal+(i*place);
				break;
			}
		}
	tempbinary=tempbinary/1000;
	place=place*10;	
	}
	printf("Binary is:%lld \n",binary);
	printf("Octal is %lld ",octal);
	
}
