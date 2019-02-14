#include <iostream>
using namespace std;
void fillarray(int list[], int len);
int sumdisplay(int list[], int len);
int main(){
	int howlong, totalsum;
	cout<<"Input how long you want your array: ";
	cin>>howlong;
	int numbers[howlong];
	fillarray(numbers, howlong);
	totalsum = sumdisplay(numbers, howlong);
	cout<<"The total sum is: "<<totalsum;
	return 0;
}
void fillarray(int list[], int len){
	int input=1, counter=0;
	while(input>0 && counter<len){
		cout<<">>>";
		cin>>input;
		list[counter] = input;
		counter ++;
	}
}
int sumdisplay(int list[], int len){
	int total=0, i;
	for(i=0;i<len;i++){
		cout<<i<<" : "<<list[i]<<endl;
		total += list[i];
	}
	return total;
}