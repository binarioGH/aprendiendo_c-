#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
int main(){
	int celsius;
	cout<<"Enter the temperature in celsius: ";
	cin>>celsius;
	int factor = 180, fahrenheit = factor * celsius/100+32;
	cout<<"Temperature in fahrenheit: "<<fahrenheit;
	return 0;
}