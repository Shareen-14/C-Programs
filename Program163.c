#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd = 0, iRet = 0;
	char Fname [30];
	char Data[7];
	
	printf("Enter the file name\n");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDWR);
	
	if(fd == -1)
	{
		printf("Unable to open the file\n");
		return -1; //return to OS
	}
	else
	{
		printf("File successfully opened with FD : %d\n",fd);
	}
	iRet = read(fd,Data,6);
	
	write(1,Data,iRet);
	
	return 0;
}