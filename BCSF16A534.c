
#include<stdio.h>
#include <unistd.h>
//#include<conio.h>
#include<stdlib.h>
#include <sys/types.h>
#include<sys/wait.h>
//using namespace std;
int main()
{
    int status;
	int i,j=0,sum=0,arr[1000],process=10;
	for(i=0;i<1000;i++)
	{
		arr[i]=i;
	}
	for(i=0;i<process;i++)
	{
		if(fork()==0)
		{
		    	printf("**%d**",i);
			for(j=j;j<j+100;j++)
			{
				sum=sum+arr[i];
			//	printf("**%d**",j);
			//	printf("**%d**",sum);
				exit(0);
			}
			//	exit(0);
		}
	}
	wait(&status);
	wait(&status);
	wait(&status);
	wait(&status);
	wait(&status);
	wait(&status);
	wait(&status);
	wait(&status);
	wait(&status);
	wait(&status);
	printf("sum is %d",&sum);

}
