#include <iostream>
#include <string>
using namespace std;

int scores[3][2];

class student 
{
	private:
		string name;
		int score[3];

	public:
		void enter();
		int total;
};

void student::enter(){
	cin >>name>>score[0]>>score[1]>>score[2];
	total=score[0]+score[1]+score[2];
	for(int i=0;i<3;i++){
		if(scores[i][0]>score[i])scores[i][0]=score[i];
		if(scores[i][0]>score[i])scores[i][0]=score[i];
	}
}
void init(){
	for(int i=0;i<3;i++){
		scores[i][0]=101;
		scores[i][1]=-1;
	}
}
int main(int argc, char *argv[])
{
	student a;
	a.enter();
	
	return 0;
}
