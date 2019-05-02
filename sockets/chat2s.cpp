#pragma comment(lib, "ws32_lib")
#include <iostream>
#include <winsock2.h>
using namespace std;
int main(){
	WSAData wd;
	if(WSAStartup(MAKEWORD(2,1), &wd) != 0){
		cout<<"ERROR.";
		exit(1);
	}
	SOCKADDR_IN addr;
	int addrl = sizeof(addr);
	addr.sin_addr.s_addr = inet_addr("127.0.0.1");
	addr.sin_port = htons(5000);
	addr.sin_family = AF_INET;
	SOCKET sock;
	sock = socket(AF_INET, SOCK_STREAM, 0);
	bind(sock, (SOCKADDR*)&addr, addrl);
	listen(sock, SOMAXCONN);
	SOCKET conn;
	conn = accept(sock, (SOCKADDR*)&addr, &addrl);
	if(conn == 0){
		cout<<"There was a problem accepting the client.";
		exit(1);
	}
	char msj[255];
	char rcv[255];
	while(msj != "exit" && rcv != "exit"){
		cout<<"->";
		cin.getline(msj, 255);
		send(conn, msj, sizeof(msj), 0);
		recv(conn, rcv, sizeof(rcv), 0);
		cout<<endl<<"Client:"<<rcv<<endl;
	}
	cout<<endl<<"Session finished."<<endl;
	return 0;
}