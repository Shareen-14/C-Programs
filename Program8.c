//Display 1 to 5 on screen
#include<stdio.h>

void Display();  //Declaration

int main()
{
	Display();  //Function call
	
	return 0;  
}

void Display()  //Defination
{
	int i=0;
	
	for(i=1; i<=5; i++)
	{
		printf("%d\n",i);
	}
}


