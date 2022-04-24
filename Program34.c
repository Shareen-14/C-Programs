//Accept the number from user and count the number of even digits
#include<stdio.h>

int CountEven(int);

int main()
{
    int iValue=0, iRet=0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = CountEven(iValue);
	printf("Number of even digits are : %d\n",iRet);
	
	return 0;
}
int CountEven(int iNo)
{
	int iCnt = 0, iDigit = 0;
	if(iNo==0)
	{
		return 1;
	}
	
	if(iNo<0)
	{
		iNo=-iNo; //Input Updator
	}
	
	while(iNo>0) //O(N) where n is the natural number (N>=0)
    {
		iDigit = iNo%10;
		if((iDigit%2)==0)
		{
			iCnt++;
		}
		iNo = iNo/10;
	}	

	return iCnt;
}