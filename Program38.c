//Accept the number from user and return the palindrome
#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(int);

int main()
{
    int iValue=0;
	bool iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	bRet = CheckPalindrome(iValue);
	if(bRet==true)
	{
	    printf("Number is a palindrome\n");	
	}
	else
	{
		printf("Number is not a palindrome\n");
	}
	
	return 0;
}
bool CheckPalindrome(int iNo)
{
	int iDigit = 0,iRev = 0;
	bool iTemp = iNo;
	
	while(iNo!=0) 
    {
		iDigit = iNo%10;
		iRev = (iRev*10) + iDigit;
		iNo = iNo/10;		
	}	
	
	if(iRev == iTemp)
	{
		return true;
	}
	else
	{
		return false;
	}
	
	return iRev;
}