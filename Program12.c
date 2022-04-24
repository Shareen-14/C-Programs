//Display 3times Marvellous on screen
#include<stdio.h>

void Display(int);  //Declaration

int main()
{
	int iNo=0;
	
	printf("Enter number\n");
	scanf("%d",&iNo);
	
	Display(iNo);  //Display(3);
	
	return 0;  
}

void Display(int iValue)  //Defination
{
	int i=0;
	//   1      2        3
	for(i=1; i<=iValue; i++)
	{
		printf("Marvellous\n");  //4
	}
}


