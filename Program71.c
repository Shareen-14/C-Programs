#include<stdio.h>

int main()
{
	int Arr[5]; //Array of 7 integers
	int iSum = 0;
	int iCnt = 0;
	printf("Enter numbers\n");
	
	/*scanf("%d",&Arr[0]);
    scanf("%d",&Arr[1]);
    scanf("%d",&Arr[2]);	
	scanf("%d",&Arr[3]);
	scanf("%d",&Arr[4]);*/
	
	for(iCnt  =0; iCnt<5; iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}
	
	iSum = Arr[0] + Arr[1] + Arr[2] + Arr[3] + Arr[4] + Arr[5];

    printf("Addition is : %d\n",iSum);	
	
	return 0;
}
