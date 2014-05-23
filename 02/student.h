#ifndef student_tag
#define student_tag
#include <string>
#include <vector>
#include "course.h"
using namespace std;

class student{
	public:
		void input(string student_name);
		void print();
		void clear();
	private:
		string name;
		vector<course> courses;
};

#endif