// Client side C/C++ program to demonstrate Socket programming 
#include <iostream>
#include <unistd.h>
#include <stdio.h> 
#include <sys/socket.h> 
#include <stdlib.h> 
#include <netinet/in.h> 
#include <string.h> 
#include <arpa/inet.h> // for inet_pton()
#define PORT 8080 

#include "proto_vector.pb.h"

using namespace std;

int main(int argc, char const *argv[]) 
{ 
	struct sockaddr_in address; 
	int sock = 0, valread; 
	struct sockaddr_in serv_addr; 
	// char *hello = "Hello from client"; 
	char buffer[1024] = {0};

	if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0) 
	{ 
		printf("\n Socket creation error \n"); 
		return -1; 
	} 

	memset(&serv_addr, '0', sizeof(serv_addr)); 

	serv_addr.sin_family = AF_INET; 
	serv_addr.sin_port = htons(PORT); 

	// Convert IPv4 and IPv6 addresses from text to binary form 
	if(inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr)<=0)  
	{ 
		printf("\nInvalid address/ Address not supported \n"); 
		return -1; 
	} 

	if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) 
	{ 
		printf("\nConnection Failed \n"); 
		return -1; 
	}
	/* 
	   send(sock , hello , strlen(hello) , 0 ); 
	   printf("Hello message sent\n"); 
	   valread = read( sock , buffer, 1024); 
	   printf("%s\n",buffer ); 
	 */


	myvector ver;
	printf("get data .............\n");

	//recevied list of file
	char *str = (char *)malloc(sizeof(char) * 50);
	valread =  read(sock,str, 50);


	//convert into char to string
	std :: string mystring(str);
	ver.ParseFromString(mystring);

	//print list of file
	int count = ver.str_size(); 
	cout << "ver size = " << count << endl;
	for(int i = 0; i < count ; i++ ){
		string *p = ver.mutable_str(i);
		cout << "Get data : " << *p << endl;
	}

	//send file name 
	char str_send[10]; 
	scanf(" %s",str_send);
	send (sock , &str_send, sizeof(str_send),0 );
	printf("Send file name ...%s \n", str_send);


	sleep(3);
	return 0; 
} 
