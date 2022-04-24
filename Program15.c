//Display 5 to 1 on screen
#include<stdio.h>

void Display();  //Declaration

int main()
{
	Display(); 
	
	return 0;  
}

void Display() //Defination
{
	int i=0;
	
	for(i=5; i>=1; i--)
	{
		printf("%d\n",i);  
	}
}


