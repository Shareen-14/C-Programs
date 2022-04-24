#include<stdio.h>
#include<stdlib.h>

int LastOccurence(int Arr[], int iSize, int iNo)
{
	int i=0;

	for(i=iSize-1; i>=0; i--)
	{
		if(Arr[i]==iNo)
		{break;}
	}
	if(i==-1)
	{
		return -1;
	}
	else
	{
		return i;
	}
}

int main()
{
	int iLength=0, i=0, iValue=0, iRet=0;
	int *ptr = NULL;

	printf("Enter number of elements\n");
	scanf("%d",&iLength);
	
	ptr = (int*)malloc(sizeof(int)*iLength);
	printf("Enter elements : \n");
	for(i=0; i<iLength; i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	printf("Enter the element to search\n");
	scanf("%d",&iValue);
	
	iRet = LastOccurence(ptr,iLength,iValue);
	if(iRet==-1)
	{
		printf("Number is not there\n");
	}
	else
	{
	printf("Number is there at index : %d\n ",iRet);
	}
	free(ptr);
	return 0;
}