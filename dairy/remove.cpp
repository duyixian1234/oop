#include "dairy.h"
using namespace std;
DAIRY pd;
int main(int argc, char *argv[]){
    if(argc!=2){
        cout<<"Parameter numbers error!\n";
        return 0;
    }

    else pd.remove(argv[1]);
    return 0;
}

