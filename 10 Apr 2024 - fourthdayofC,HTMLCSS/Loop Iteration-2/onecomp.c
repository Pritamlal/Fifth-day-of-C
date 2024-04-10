#include<stdio.h>
#define size 8
int main()
{
	int i,error=0;
	char binary[size+1],onescom[size+1];
	printf("Enter the numbers %d::",size);
	gets(binary);
	
	for(i=0;i<size;i++)
	{
	if(binary[i]=='1')
	{
		onescom[i]='0';
	}
	else if(binary[i]=='0')
	{
		onescom[i]='1';
	}
	else
	{
		printf("Invalid");
		error=1;
		break;
	}
}
onescom[size]='\0';
	if(error==0){
	printf("Your binary is %s\n",binary);
	printf("Your onescom is %s",onescom);
}
}

