#include <iostream>
#include <unistd.h> 
#include <stdio.h> 
#include <sys/socket.h> 
#include <stdlib.h> 
#include <netinet/in.h> 
#include <string.h> 
#include <dirent.h>

#define PORT 8080
using namespace std;

#include "proto_vector.pb.h"

int main(int argc, char *argv[])
{
	int server_fd, new_socket, valread;
	struct sockaddr_in address;

	int opt = 1; 
	int addrlen = sizeof(address); 

	// Creating socket file descriptor 
	if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0) 
	{ 
		perror("socket failed"); 
		exit(EXIT_FAILURE); 
	} 

	// Forcefully attaching socket to the port 8080 
	if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT, 
				&opt, sizeof(opt))) 
	{ 
		perror("setsockopt"); 
		exit(EXIT_FAILURE); 
	} 

	address.sin_family = AF_INET; 
	address.sin_addr.s_addr = INADDR_ANY; 
	address.sin_port = htons( PORT ); 


	// Forcefully attaching socket to the port 8080 
	if (bind(server_fd, (struct sockaddr *)&address,  
				sizeof(address))<0) 
	{ 
		perror("bind failed"); 
		exit(EXIT_FAILURE); 
	} 

	printf("Server is waiting for client \n");	

	myvector ver;
	cout << ver.str_size() << endl;


	DIR *dpdf;
	struct dirent *epdf;
	dpdf = opendir(argv[1]);
	if(dpdf != NULL){
		while (epdf = readdir(dpdf)){

			cout << "Filename = " << epdf->d_name  << endl;
			ver.add_str((epdf->d_name));

		}
		closedir(dpdf);

	}


	//	ver.add_str("Chirag");


	if (listen(server_fd, 3) < 0) 
	{ 
		perror("listen"); 
		exit(EXIT_FAILURE); 
	} 
	if ((new_socket = accept(server_fd, (struct sockaddr *)&address,  
					(socklen_t*)&addrlen))<0) 
	{ 
		perror("accept"); 
		exit(EXIT_FAILURE); 
	} 


	/*	
		valread = read( new_socket , buffer, 1024); 
		printf("%s\n",buffer ); 
		send(new_socket , hello , strlen(hello) , 0 ); 
		printf("Hello message sent\n");

	 */

	string str;
	ver.SerializeToString(&str);
	int i = str.length();

	//send list of the file
	send(new_socket,str.c_str(), i, 0);

	//recevied file name
	char *str_revc = (char *)malloc(sizeof(char) * 10);
	read(new_socket,str_revc, 10 );
	cout << "new file name " << str_revc << endl;

	//	myvector ver1;
	//	ver1.ParseFromString(str);
	//	string p = ver1.str(0);
	//	cout << p << endl;
	//	printf("data transfor \n");

	sleep(5);

	return 0; 




}

