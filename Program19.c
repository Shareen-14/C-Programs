//Input : 1
//Output : 1

//Input : 3
//Output : 6

//Input : 5
//Output : 120

#include<stdio.h>

int Factorial(int);  //Declaration

int main()
{
	int iNo=0, iRet=0;
	
    printf("Enter Number\n");
	scanf("%d",&iNo);
	
	iRet = Factorial(iNo); 
	
	printf("Factorial is : %d\n",iRet);
	
	return 0;  
}

int Factorial(int iValue) //Defination
{
	int iFact = 1;
	int iCnt = 0;
	
	if(iValue<0) //Updater
	{
		iValue=-iValue;
	}
	
	for(iCnt=1; iCnt<=iValue; iCnt++)
	{
		iFact = iFact*iCnt;
	}
	
	return iFact;
}



