#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

int data_set[1000];
int chunk_size=100;

void  * add(void *arg)
{
	int start=(int)arg;
	int end=start+chunk_size;
	int sum=0,i=0;
	for(i=start;i<end;i++)
	{
		sum=sum+data_set[i];
	}
	return (void*)sum;
}

int main()
{
	int status[10];
	pthread_t threadss[10];
	for(int i=0;i<1000;i++)
	{
		data_set[i]=i;
	}
	for(int i=0;i<10;i++)
	{
		pthread_create(&threadss[i],NULL,add,(void*)(i*chunk_size));
	}
	for(int i=0;i<10;i++)
	{
		pthread_join(threadss[i],(void**) & status[i]);
	}
	int sum=0;
	for(int i=0;i<10;i++)
	{
		sum=sum+status[i];
	}
	printf("sum is %d",sum);
	return 0;
}
