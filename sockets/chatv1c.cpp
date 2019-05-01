#pragma comment(lib, "ws2_32.lib")
#include <iostream>
#include <winsock2.h>
using namespace std;

void startAddr4(SOCKADDR_IN *a, char* host, int port);
int main(){
	char ip[20] = "127.0.0.1";
	int port = 5000;
	WSAData wsadata;
	if(WSAStartup(MAKEWORD(2,1), &wsadata) != 0){
		cout<<"ERROR";
		return 1;
	}
	SOCKADDR_IN addr;
	int addrlen = sizeof(addr);
	startAddr4(&addr, ip, port);
	SOCKET sock = socket(AF_INET, SOCK_STREAM, 0);
	if(connect(sock, (SOCKADDR*)&addr, addrlen) != 0){
		cout<<"Error, can not connect to the server.";
		return 1;
	}
	cout<<"Starting chat."<<endl;
	char rcv[255];
	while(rcv != "exit" && recv(sock, rcv, sizeof(rcv),0) != -1){		cout<<rcv<<endl;
	}
	return 0;
}

void startAddr4(SOCKADDR_IN *a, char* host, int port){
	a->sin_addr.s_addr = inet_addr(host);
	a->sin_port = htons(port);
	a->sin_family = AF_INET;
    return;
}