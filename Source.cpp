// Server side C/C++ program to demonstrate Socket
// programming

#include<iostream>
#include<fstream>
#include<stdio.h>
#include<winsock.h>
#include <stdlib.h>

class Socket
{
	struct sockaddr_in address;
	
	Socket()
	{
		int sockfd = socket(AF_INET, SOCK_STREAM, 0);
		int bind(int sockfd, const struct sockaddr* addr, socklen_t addrlen);;
		int listen(int sockfd, LONG_MAX);
		int new_socket = accept(int sockfd, struct sockaddr* addr, socklen_t * addrlen);
	}
};

class clinet
{
	int G=connect(int sockfd, const struct sockaddr* addr, socklen_t addrlen);
};
using namespace std;

void main()
{
	struct sockaddr_in address;
	address.sin_addr = INADDR_ANY;
}
