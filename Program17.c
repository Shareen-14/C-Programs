//Input : 3
//Output : 6

//Input : 5
//Output : 15

#include<stdio.h>

int Addition(int);  //Declaration

int main()
{
	int iNo=0, iRet=0;
	
    printf("Enter Number\n");
	scanf("%d",&iNo);
	
	iRet = Addition(iNo); 
	
	printf("Addition is : %d\n",iRet);
	
	return 0;  
}

int Addition(int iValue) //Defination
{
	int iSum = 0;
	int iCnt = 0;
	
	for(iCnt=1; iCnt<=iValue; iCnt++)
	{
		iSum = iSum + iCnt;
	}
	
	return iSum;
}



