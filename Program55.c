//Input: 6

//iCnt    1 2 3 4 5 6 
//Output: a b c d e f

#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;
	char ch = 'A';
	
	for(iCnt=1; iCnt<=iNo; iCnt++)
	{ 
		printf("%c\t",ch);
		ch++;
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter number : \n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}

