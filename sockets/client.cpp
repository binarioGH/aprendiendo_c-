#pragma comment(lib, "ws2_32.lib")
#include <winsock2.h>
#include <iostream>
//To compile this you have to use -lws2_32.
using namespace std;
int main(){
	WSAData wsaData;
	if(WSAStartup(MAKEWORD(2,1), &wsaData)){
		cout<<"There was a problem starting Winsock2."<<endl;
		exit(1);
	}
	SOCKADDR_IN addr;
	int addrlen = sizeof(addr);
	addr.sin_addr.s_addr = inet_addr("127.0.0.1");
	addr.sin_port = htons(5000)
	addr.sin_family = AF_INET;
	return 0;
}
