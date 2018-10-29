#ifndef _MAINTHREAD_H
#define _MAINTHREAD_H
#include "childthread.h"
#include "headerfiles.h"	

class mainthread {
public:

    mainthread();
    
    ~mainthread();
    private:
  void createmainthread();
  vector<mainth> *segment1;
  vector<mainth> *segment2;
  vector<mainth> *segment3;
  vector<mainth> *segment4;
  
  childthread *childth1;
  childthread *childth2;
  childthread *childth3;
  childthread *childth4;
};


#endif
