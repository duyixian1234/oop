#include <iostream>
#include <string>
#include "student.h"
using namespace std;

STUDENT::STUDENT(const string &input){
    name=input;
}

string STUDENT::get_name(){
    return name;
}
