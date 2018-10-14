#include<string.h>
#include<stdio.h>
#include<stdli.h>
#include<sys/type.h>
#include<sys/socket.h>
#include<errno.h>
int main()
{
	int sock,cli;
	struct sockaddr_in server,client;
	unsigned len;
	int sent;
	char msg[5]="hello";
	if(sock=socket(af_inet,sock_stream,0)==-1)
	{
		perror("socket");
		exit(-1);
	}
	server.sin_family=af_inet;
	server.sin_port=htnos(10000);
	server.sin_addr=inaddar.any;
	bzero(&server.sin_zero,8);
	len=sizeof(struct sockaddr_in);
	if(bind(sock,(struct sockaddr*)&server,,len)==-1)
	{
		perror("bind");
		exit(-1);
	}
	if(sock=socket(sock,5)==-1)
	{
		perror("listen");
		exit(-1);
	}
	while(1)
	{
	if(cli=accept(sock,(struct sockaddr*)&client,&client,&len)==-1)
	{
		perror("socket");
		exit(-1);
	}
	send(cli,msg,stlen(msg),0);
	printf("send %d bytes to client:%s\n",sent,inet_ntoa(client.sin.addr));
	close(cli);
    }
}