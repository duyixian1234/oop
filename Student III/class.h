#ifndef class_h
#define class_h
using namespace std;
class CLASS
{
private:
    list<STUDENT> students;
    list<COURSE> courses;
    map<string,int> sid;
    map<string,int> cid;
    map< int,map<int,int> > scores;
public:
    CLASS();
    void list_students();
    void list_courses();
    void list_scores();
    //~CLASS();

};
#endif
