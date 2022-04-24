//Header file inclusion
#include<stdio.h>

//Function Declaration
void Display(int);

//Entry point Function
int main()
{
    int iValue=0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	Display(iValue); //Display(752)
	
	return 0;
}

//Function call
void Display(int iNo)
{
	int iDigit = 0;
	
	while(iNo>0)
	{
	iDigit = iNo%10;
	printf("%d\n",iDigit);
	iNo = iNo/10;
	}
	
}