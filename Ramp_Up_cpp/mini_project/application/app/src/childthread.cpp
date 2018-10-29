#include "childthread.h"


childthread::childthread(){

	id = 0;
        name = "DefaultName";
   	s_count = 0;
   	f_count = 0;
        startval = 0;
        Running = false;
	segment = NULL;
        obj = NULL;
}
childthread::childthread(int l_id, string l_name,int startValue, vector<mainth> *segment1)
{
    id = l_id;
    name = l_name;
    s_count = 0;
    s_count = 0;
    Running = false;
    segment = segment1;
    obj = NULL;
    startval = startValue;

}
childthread::~childthread(){
if(t1.joinable())
    {
        terminate();
    }
}
int childthread::getid(){
	return id;
}
int childthread::success_count(){
	return s_count;
}
int childthread::fail_count(){
	return f_count;
}
void childthread::putsuccess_count(int count){
        s_count = count;
}
void childthread::putfail_count(int count){
	f_count = count;
}
string childthread::getname(){
	return name;
}
void childthread::start(){
{
       Running = true;
       t1 = thread(&childthread::writedata,this);
       t1.detach();
}

}
void childthread::stop(){
       Running = false;
}
void childthread::writedata()
{
    if((NULL != segment) && (115 > segment->size()))
    {

        for(int i = 0 ; i < 115; i++)
        {
	    cout<< "thread name = "<< name.c_str() << " i = " << i << " t_id = "<< id <<endl;
            segment->push_back(startval + i);
        }
        if(NULL != obj)
        {
            obj->childCallbackFunction(startval,segment,this);
        }

    }

}

void childthread::verifyData(int startValue, vector<mainth> *segment1,  childthread *callchild)
{
    int success = 0, fail = 0;
    if((NULL != segment1) && (115 <= segment1->size()))
    {
        for(int i = 0 ; i < 115; i++)
        {
            if(segment1->at(i) == (unsigned int)startValue + i)
            {
                success++;
            }
            else
            {
                fail++;
            }
        }
        cout<< "Success = " << success <<endl;
        cout<< "Failure = " << fail <<endl;
        if(NULL != callchild)
        {
            callchild->putsuccess_count(success);
            callchild->putfail_count(fail);
        }
    }
}

void childthread::childCallbackFunction(int startValue, vector<mainth> *segment1 , void *callchild)
{
    this->verifyData(startValue,segment1,(childthread *)callchild);
}
void childthread::connectwithCallback(callback *cb)
{
    obj = cb;
}


