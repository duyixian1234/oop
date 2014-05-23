#include <iostream>
#include <string>
#include "course.h"
using namespace std;

COURSE::COURSE(const string &input){
    name=input;
}

string COURSE::get_name(){
    return name;
}
