//Header file inclusion
#include<stdio.h>

//Function Declaration
void Display();

//Entry point Function
int main()
{
	Display(); //Function call
	
	return 0;
}

//Function call
void Display()
{
	//Local variables
 	int iNo = 7521;
	int iDigit = 0;
	
	while(iNo>0)
	{
	iDigit = iNo%10;
	printf("%d\n",iDigit);
	iNo = iNo/10;
	}
	
}