#include<stdio.h>
#include<stdlib.h>
//Diff betn Smallest Number and Largest number
int Difference(int Arr[], int iSize)
{
	int i=0, iMax=Arr[0], iMin=Arr[0], iDiff = 0;
	
	for(i=0; i<iSize; i++)
	{
		if(Arr[i]>iMax)
		{
			iMax=Arr[i];
		}
		
		if(Arr[i]<iMin)
		{
			iMin=Arr[i];
		}
		iDiff = iMax - iMin;
	}
    return iDiff;
}

int main()
{
	int iLength=0, i=0, iRet=0;
	int *ptr = NULL;

	printf("Enter number of elements\n");
	scanf("%d",&iLength);
	
	ptr = (int*)malloc(sizeof(int)*iLength);
	
	printf("Enter elements : \n");
	for(i=0; i<iLength; i++)
	{
		scanf("%d",&ptr[i]);
	}
	iRet = Difference(ptr,iLength);
	printf("Count is : %d\n",iRet);
	free(ptr);
	return 0;
}