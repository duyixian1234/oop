#include <iostream>
#include <string>
#include "course.h"
#include "student.h"
using namespace std;

void student::input(string student_name){
	string str;
	int x;
	course a;
	name=student_name;
	cin>>str;
	while(str!="end"){
		cin>>x;
		a.input(str,x);
		courses.push_back(a);
		cin>>str;
	}
	return ;
}

void student::print(){
	cout<<name<<"\t";
	for(int i=0;i<courses.size();i++){
		courses[i].print_name();
		cout<<"\t";
	}
	cout<<endl;
	cout<<"\t";
	for(int i=0;i<courses.size();i++){
		courses[i].print_score();
		cout<<"\t";
	}
	cout<<endl;
	return ;
}

void student::clear(){
	name="";
	courses.clear();
	return ;
}
