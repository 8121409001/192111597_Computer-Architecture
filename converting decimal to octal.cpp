#include<stdio.h>
int main()
{
		long decimalnum,remainder,quotient,octalnum=0;
		int octalNumber[100],i=1,j;
		printf("enter the decimal number:");
		scanf("id",&decimalnum);
		quotient=decimalnum;
		while(quotient!=0)
		{
			octalNumber[i++]=quotient%8;
		}
		for(j=i-1;j>0;j--)
		octalnum=octalnum*10+octalNumber[j];
		printf("equivalent octal value of decimal no %d is:%d",decimalnum,octalnum);
		return 0;
}
