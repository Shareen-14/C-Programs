//Accept number from a user and display it in reverse order
#include<stdio.h>

void Display(int);  //Declaration

int main()
{
	int iNo = 0;
	
    printf("Enter Number\n");
	scanf("%d",&iNo);
	
	Display(iNo); 
	
	return 0;  
}

void Display(int iValue) //Defination
{
	int i=0;
	
	for(i=iValue; i>=1; i--)
	{
		printf("%d\n",i);  
	}
}


