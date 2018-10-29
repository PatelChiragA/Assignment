#ifndef _CHILDTHREAD_H
#define _CHILDTHREAD_H
#include "callback.h"
#include "headerfiles.h"
class childthread : public callback
{




private:
	
	int id,s_count,f_count;
	string name;
	bool Running;
	thread t1;
	int startval;
	
	callback *obj;
	vector<mainth> *segment ;
	
public:			
	childthread();	
	~childthread();	
	
	childthread(int l_id, string l_name,int startValue, vector<mainth> *segment1);
	int getid();
	int success_count();
	int fail_count();
	string getname();
	void putsuccess_count(int count);
	void putfail_count(int count);
	void start();
	void stop();
	void writedata();

	void verifyData(int startValue,vector<mainth> *segment, childthread *callchild);
        void childCallbackFunction(int startValue, vector<mainth> *segment , void *callchild);
        void connectwithCallback(callback *cb);
        
};


#endif
