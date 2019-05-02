#pragma comment(lib, "ws32_lib")
#include <iostream>
#include <string>
#include <winsock2.h>
using namespace std;

int main(){
	WSAData wd;
	if(WSAStartup(MAKEWORD(2,1), &wd) != 0){
		cout<<"There was a problem starting the program.";
		exit(1);
	}
	SOCKADDR_IN addr;
	int addrl = sizeof(addr);
	addr.sin_addr.s_addr = inet_addr("127.0.0.1");
	addr.sin_port = htons(5000);
	addr.sin_family = AF_INET;
	SOCKET sock = socket(AF_INET, SOCK_STREAM, 0); 
	if(connect(sock, (SOCKADDR*)&addr, addrl) != 0){
		cout<<"Error while connecting to the server.";
		exit(1);
	}
	string getMsj;
	char msj[255];
	char rcv[255];
	while(getMsj != "exit" && recv(sock, rcv,sizeof(rcv), 0) != -1){
		cout<<rcv<<endl;
		cout<<"->";
		getline(cin,getMsj);
        strcpy(msj, getMsj.c_str());
		send(sock, msj, sizeof(msj),0);
	}
	cout<<"The session has ended.";
	if(closesocket(sock) != 0){
		cout<<"An error has ocurred while closing the socket.";
	}
	else{
		cout<<"Socket closed properly.";
	}
	return 0;
}