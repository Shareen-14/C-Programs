//Accept the number from user and return the addition of the digits
#include<stdio.h>

int Display(int);

int main()
{
    int iValue=0, iRet=0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = Display(iValue);
	printf("Addition of digits is : %d\n",iRet);
	
	return 0;
}

int Display(int iNo)
{
	int iDigit = 0;
	int iSum = 0;
	
	if(iNo<0)
	{
		iNo=-iNo; //Input Updator
	}
	
	while(iNo>0)
	{
	iDigit = iNo%10;
	iSum = iSum + iDigit;
	iNo = iNo/10;
	
	}
	return iSum;
}