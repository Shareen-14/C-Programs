#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(char *str)
{
	char *end = NULL;
	bool flag = true;
	end = str;
	
	while(*end != '\0')
	{
		end++;
	}
	end--;
	
	while(str<end)
	{
		if(*str != *end)
		{
			flag = false;
			break;
		}
		str++;
		end--;
	}
	return flag;
}

int main()
{
	char Arr[30];
	int bRet= false;
	
	printf("Enter String\n");
	scanf("%[^'\n']s",Arr);
	
	bRet = CheckPallindrome(Arr);  //CheckPallindrome(50)
	if(bRet==true)
	{
		printf("It is Pallindrome\n");	
	}
	else
	{
		printf("It is not Pallindrome\n");
	}
	return 0;
}