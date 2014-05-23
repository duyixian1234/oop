#include <iostream>
#include <string>
#include "course.h"
using namespace std;

void course::input(string course_name,int course_score){
	name=course_name;
	score=course_score;
	return ;
}

void course::print_name	(){
	cout<<name;
	return ;
}

void course::print_score(){
	cout<<score;
	return ;
}
