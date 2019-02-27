#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
class Student{
public:
	int semesterHours;
	double gpa;
};
void someFn(Student copyS){
	copyS.semesterHours = 10;
	copyS.gpa = 3.0;
	cout<<"The value of copyS.gpa = "<<copyS.gpa<<endl;
	return;
}
int main(int nArg ,char* pArgs[]){
	Student s;
	s.gpa = 0.0; 
	cout<<"Calling someFn()"<<endl;
	someFn(s);
	cout<<"new gpa: "<<s.gpa;
	return 0;
}