#pragma comment(lib, "ws2_32.lib")
#include <iostream>
#include <winsock2.h>
using namespace std;

void startAddr4(SOCKADDR_IN *a, char* host, int port);

int main(int nArgs, char* argv[]){
	char ip[20] = "127.0.0.1";
	int port = 5000;
	WSAData wsadata;
	if(WSAStartup(MAKEWORD(2,1), &wsadata) != 0){
		cout<<"There was a problem starting the program."<<endl;
		return 1;
	}
	SOCKADDR_IN addr;
	int addrlen = sizeof(addr);
	startAddr4(&addr, ip, port);
	SOCKET sock = socket(AF_INET, SOCK_STREAM, 0);
	bind(sock,(SOCKADDR*)&addr, sizeof(addr));
	listen(sock, SOMAXCONN);
	SOCKET conn = accept(sock, (SOCKADDR*)&addr, &addrlen);
	if(conn == 0){
		cout<<"Connection failure."<<endl;
		return 1;
	}
	cout<<"Starting Chat..."<<endl;
	char msj[255];
	while(msj != "exit"){
		cout<<"<->";
		cin.getline(msj, sizeof(msj));
		send(conn, msj, sizeof(msj), 0);
	}
	return 0;
}

void startAddr4(SOCKADDR_IN *a, char* host, int port){
	a->sin_addr.s_addr = inet_addr(host);
	a->sin_port = htons(port);
	a->sin_family = AF_INET;
    return;
}