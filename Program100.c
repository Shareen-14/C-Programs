#include<stdio.h>

void Display(char Brr[])
{
	printf("Name is : %s\n",Brr)
}

int main()
{
	char Arr[50];
	
	printf("Enter your name : \n");
	scanf("%[^'\n']s",Arr);
	
	printf("Your entered name is : %s",Arr);
	
	return 0;
}