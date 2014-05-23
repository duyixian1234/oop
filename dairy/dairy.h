#ifndef dairy_tag
#define dairy_tag
#include <iostream>
#include <stdlib.h>
#include "sqlite3.h"
using namespace std;
struct DAIRY{
	private:
	sqlite3* db;
	public:
	DAIRY();
	void list(const char* start,const char* end);
    void show(const char* date);
    void remove(const char* date);
    void add(const char* date,const char* content);
	~DAIRY();
};



#endif
