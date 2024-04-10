#include<stdio.h>
#include<string.h>
int main()
{
	int hexaconstant[]={0,1,10,11,100,101,110,111,1000,1001,1010,1011,1100,1101,1110,1111};
	long long binary,tempbinary;
	int index,i,lastd;
	char hex[20];
	
	printf("Enter the number::");
	scanf("%lld",&binary);
	tempbinary=binary;
	index=0;
	
	while(tempbinary!=0)
	{
		lastd=tempbinary%10000;
		
		for(i=0;i<16;i++)
		{
			if(hexaconstant[i]==lastd)
			{
				if(i<10)
				{
					hex[index]=(char)(i+48);
				}
				else
				{
					hex[index]=(char)((i-10)+65);
				}
				index++;
				break;
			}
		}
		tempbinary/=10000;
	}
	hex[index]='\0';
	strrev(hex);
	
	printf("Binary is :%lld \n",binary);
	printf("Hex is %s",hex);
}
