#include <iostream>
#include <string>
#include <vector>
#include "course.h"
#include "student.h"
using namespace std;
vector<student> students;

int main(){
	student a;
	string 	str;
	cout<<"Please input the name of the student,\"finish\" to finish it."<<endl;
	cin>>str;
	while(str!="finish"){
		cout<<"Please input the name and score of each course,\"end\" to finish it."<<endl;
		a.input(str);
		students.push_back(a); 
		a.clear();
		cin>>str;
	}
	for(int i=0;i<students.size();i++)students[i].print();
	students.clear();
	return 0;
}
