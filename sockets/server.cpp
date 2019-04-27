#pragma comment(lib, "ws2_32.lib")
#include <winsock2.h>
#include <iostream>
using namespace std;

void startIpv4Socket(SOCKADDR_IN *sock, char* ip, int port);

int main(){
	WSAData wsadata;
	if(WSAStartup(MAKEWORD(2,1), &wsadata)){
		cout<<"There was a problem starting Winsock2."<<endl;
	}
	SOCKADDR_IN addr;
	int addrlen = sizeof(addr);
	startIpv4Socket(&addr, "127.0.0.1", 5000);
	cout<<addr.sin_addr.s_addr<<endl;
	cout<<addr.sin_port<<endl;
	return 0;
}

void startIpv4Socket(SOCKADDR_IN *sock, char* ip, int port){
	sock->sin_addr.s_addr = inet_addr(ip);
	sock->sin_port = htons(port);
	sock->sin_family = AF_INET;
	return;
}