#include<stdio.h>

int SmallCount(char *str)
{
	int iCnt=0;
	
	while(*str != '\0')
	{
		if((*str >= 'A')&&(*str <= 'Z'))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet = 0;
	
	printf("Enter String \n");
	scanf("%[^'\n']s",Arr);
	
	iRet = SmallCount(Arr);
	
	printf("Capital letters are : %d\n",iRet);
	
	return 0;
}