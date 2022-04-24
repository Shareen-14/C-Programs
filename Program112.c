#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char c)
{
	if((c>='a')&&(c<='b'))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	char ch = '\0';
	bool bRet = false;
	
	printf("Enter character \n");
	scanf("%c",&ch);
	bRet = CheckCapital(ch);
	
	if(bRet==true)
	{
		printf("It is small");
	}
	else
	{
		printf("It is not small");
	}
	
	return 0;
}