#pragma comment(lib, "ws2_32.lib")
#include <winsock2.h>
#include <iostream>
//To compile this you have to use -lws2_32.
using namespace std;
int main(){
	WSAData wsdata;
	if(WSAStartup(MAKEWORD(2,1), &wsdata) != 0){
		cout<<"There was a problem starting up."<<endl;
		exit(0);
	}
	SOCKADDR_IN addr;
	int addrlen = sizeof(addr);
	addr.sin_addr.s_addr = inet_addr("127.0.0.1");
	addr.sin_port = htons(5000);
	addr.sin_family = AF_INET;
	SOCKET sock = socket(AF_INET, SOCK_STREAM , 0);
	if(connect(sock, (SOCKADDR*)&addr, addrlen) != 0){
		cout<<"There was a problem connecting to the server"<<endl;
		exit(0);
	}
	cout<<"connected!"<<endl;
	char msj[255];
	recv(sock, msj, sizeof(msj), 0);
	cout<<"Server: "<<msj<<endl;
	return 0;
}