#include "dairy.h"
#include <stdio.h>
using namespace std;

char sql[200];
char* err_msg=NULL;
int sum=0;

int list_callback(void *data,int n_columns,char **col_values,char **col_names){

	for (int i=0;i<n_columns;i++) cout<<col_values[i]<<endl;
	sum++;
	return 0;
}

DAIRY::DAIRY(){
	db=NULL;
	int result=sqlite3_open("dairy.db",&db);

	if(SQLITE_OK!=result){
		cout<<"Open the dairy data file error!\n";
	}

}

DAIRY::~DAIRY(){
	if(db)
		sqlite3_close(db);
}

void DAIRY::list(const char* start,const char* end){
	sum=0;
	sprintf(sql," SELECT * FROM dairy WHERE DATETIME(date) BETWEEN DATETIME('%s') and DATETIME('%s');",start,end);
	//cout<<sql<<endl;
	sqlite3_exec(db,sql,&list_callback,0,&err_msg);
	cout<<"Total:"<<sum<<endl;

}

void DAIRY::show(const char* date){
	sum=0;
	sprintf(sql," SELECT * FROM dairy WHERE DATETIME(date) = DATETIME('%s');",date);
	sqlite3_exec(db,sql,&list_callback,0,&err_msg);

}

void DAIRY::remove(const char* date){
	sum=0;
	sprintf(sql," SELECT * FROM dairy WHERE DATETIME(date) = DATETIME('%s');",date);
	sqlite3_exec(db,sql,&list_callback,0,&err_msg);
	if(sum){
		sprintf(sql," DELETE  FROM dairy WHERE DATETIME(date) = DATETIME('%s');",date);
		sqlite3_exec(db,sql,0,0,&err_msg);
		cout<<0<<endl;
	}
	else cout<<-1<<endl;
}

void DAIRY::add(const char* date,const char* content){
	sprintf(sql," INSERT  INTO  dairy values('%s','%s');",date,content);
	sqlite3_exec(db,sql,0,0,&err_msg);
}
