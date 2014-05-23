#include "dairy.h"
using namespace std;
DAIRY pd;
int main(int argc, char *argv[]){
	char start[]="1900-01-01";
	char end[]="2099-12-31";
	/*
for(int i=1;i<argc;i++){
		cout<<argv[i]<<endl;
	}*/
	if(argc==2||argc>3){
		cout<<"Parameter numbers error!\n";
		return 0;
	}
	else if(argc==3)pd.list(argv[1],argv[2]);
	else pd.list(&start[0],&end[0]);
	return 0;
}

