#include "dairy.h"
#include "string.h"
using namespace std;
DAIRY pd;
int main(int argc, char *argv[]){
    char date[]="2012-12-12",*content=(char*)malloc(300*1024),*line=(char*)malloc(300);
    cout<<"Date:"<<endl;
    cin>>date;
    cout<<"Content(end with a single '.':"<<endl;
    strcpy(content,"");
    cin>>line;
    while(line[0]!=EOF&&line[0]!='.'){
        strcat(content,line);
        strcat(content,"\n");
        cin>>line;
    }
    strcat(content,"");
    //cout<<content;
    pd.add(date,content);
    return 0;
}

