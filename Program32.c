//Accept the number from user and return the number of the digits
#include<stdio.h>

int CountDigit(int);

int main()
{
    int iValue=0, iRet=0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = CountDigit(iValue);
	printf("Number of digits are : %d\n",iRet);
	
	return 0;
}

int CountDigit(int iNo)
{
	int iDigit = 0;
	int iCnt = 0;
	
	if(iNo==0)
	{
		return 1;
	}
	
	if(iNo<0)
	{
		iNo=-iNo; //Input Updator
	}
	
	while(iNo>0)
	{
	iDigit = iNo%10;
	iCnt++; //iCnt = iCnt + 1;
	iNo = iNo/10;
	
	}
	return iCnt;
}