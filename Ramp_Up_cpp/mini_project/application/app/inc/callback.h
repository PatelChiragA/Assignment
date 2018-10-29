#ifndef _CALLBACK_H
#define _CALLBACK_H
#include "headerfiles.h"
class callback{
	
	public:
		callback() {}
		//~callback() {}
               virtual void childCallbackFunction(int l_startValue, vector<uint64_t> *segment, void *Callerchild )=0;

};


#endif
