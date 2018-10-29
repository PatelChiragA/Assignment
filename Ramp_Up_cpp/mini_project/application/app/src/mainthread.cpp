#include "mainthread.h"
#include "unittest++/UnitTest++.h"

mainthread::mainthread(){	
	
	thread l_thread = thread(&mainthread::createmainthread,this);
        l_thread.join();	
}
mainthread::~mainthread()
{
    cout << "" << endl;
    cout << "childthread-1 Success Count : " << childth1->success_count() << endl;
    cout << "childthread-1 Failure Count : " << childth1->fail_count() << endl;

    cout << "childthread-2 Success Count : " << childth2->success_count() << endl;
    cout << "childthread-2 Failure Count : " << childth2->fail_count() << endl;

    cout << "childthread-3 Success Count : " << childth3->success_count() << endl;
    cout << "childthread-3 Failure Count : " << childth3->fail_count() << endl;

    cout << "childthread-4 Success Count : " << childth4->success_count() << endl;
    cout << "childthread-4 Failure Count : " << childth4->fail_count() << endl;

    delete segment1;
    delete segment2;
    delete segment3;
    delete segment4;

    delete childth1;
    delete childth2;
    delete childth3;
    delete childth4;
}

void mainthread::createmainthread()
{
    segment1 = new vector<mainth>;
    segment2 = new vector<mainth>;
    segment3 = new vector<mainth>;
    segment4 = new vector<mainth>;

    childth1 = new childthread(1,"c1",100,segment1);
    childth2 = new childthread(2,"c2",200,segment2);
    childth3 = new childthread(3,"c3",600,segment3);
    childth4 = new childthread(4,"c4",900,segment4);

    childth1->connectwithCallback(childth2);
    childth2->connectwithCallback(childth3);
    childth3->connectwithCallback(childth4);
    childth4->connectwithCallback(childth1);

    childth1->start();childth2->start();childth3->start(); childth4->start();
}

