#include <iostream>
#include <string>
#include <map>
#include <list>
#include <set>
#include "student.h"
#include "course.h"
#include "class.h"

using namespace std;

CLASS::CLASS(){
    set<string> course_set;
    int i=1;
    int j=1;
    string str;
    while(1){
        cout<<"Please input the name the No. "<<i<<" student's name(end with \".\"):";
        cin>>str;
        cout<<endl;
        if (str==".")
        {
            break;
        }
        STUDENT x(str);
        students.push_back(x);
        sid[str]=i;
            while(1){
                cout<<"Please input the name the course name and the score end with \".\"):";
                int score;
                cin>>str;
                cout<<endl;
                if (str==".")
                {
                    break;
                }
                if(course_set.count(str)==0){
                    course_set.insert(str);
                    COURSE y(str);
                    courses.push_back(y);
                    cid[str]=j;
                    j++;
                    }
                cin>>score;
                scores[i][cid[str]]=score;
            }
            i++;
    }
}

void CLASS::list_students(){
    list<STUDENT>::iterator i;
    for(i=students.begin();i!=students.end();++i){
        cout<<i->get_name()<<endl;
    }
}

void CLASS::list_courses(){
    list<COURSE>::iterator i;
    for(i=courses.begin();i!=courses.end();++i){
        cout<<i->get_name()<<endl;
    }
}

void CLASS::list_scores(){
    list<STUDENT>::iterator i;
    list<COURSE>::iterator j;
    cout<<"name"<<'\t';
    for(j=courses.begin();j!=courses.end();++j)
        cout<<j->get_name()<<'\t';
    cout<<endl;
    for(i=students.begin();i!=students.end();++i){
         cout<<i->get_name()<<'\t';
        for(j=courses.begin();j!=courses.end();++j){
            if(scores[sid[i->get_name()]].count(cid[j->get_name()]))
                cout<<scores[sid[i->get_name()]][cid[j->get_name()]]<<'\t';
            else cout<<'\t';
        }
        cout<<endl;

    }
}
