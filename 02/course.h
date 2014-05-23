#ifndef course_tag
#define course_tag
#include <iostream>
#include <string>
using namespace std;
class course{
	public:
		void input(string course_name,int course_score);
		void print_name();
		void print_score();
	private:
		string name;
		int score;	
};

#endif