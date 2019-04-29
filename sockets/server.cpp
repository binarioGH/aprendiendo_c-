#pragma comment(lib, "ws2_32.lib")
#include <iostream>
#include <winsock2.h>
using namespace std;

int main(){
	WSAData wsadata;
	if(WSAStartup(MAKEWORD(2,1), &wsadata) != 0){
		cout<<"Error: socket miss started"<<endl;
		exit(0);
	}
	SOCKADDR_IN addr;
	int addrl = sizeof(addr);
	addr.sin_addr.s_addr = inet_addr("127.0.0.1");
	addr.sin_port = htons(5000);
	addr.sin_family = AF_INET;
	SOCKET sock = socket(AF_INET, SOCK_STREAM, 0);
	bind(sock, (SOCKADDR*)&addr, sizeof(addr));
	listen(sock, SOMAXCONN);
	SOCKET conn;
	conn = accept(sock, (SOCKADDR*)&addr, &addrl);
	if(conn == 0){
		cout<<"Failed to accept connection."<<endl;
		exit(0);
	}
	cout<<"Client connected!"<<endl;
	return 0;
}