#include "childthread.h"
#include "headerfiles.h"
TEST(app)
{	

    vector<mainth> seg1;
    vector<mainth> seg2;
    vector<mainth> seg3;
    vector<mainth> seg4;

    childthread childth1(1,"c1",100,&seg1);
    childthread childth2(2,"c2",300,&seg2);
    childthread childth3(3,"c3",600,&seg3);
    childthread childth4(4,"c4",900,&seg4);

    childth1.connectwithCallback(&childth2);
    childth2.connectwithCallback(&childth3);
    childth3.connectwithCallback(&childth4);
    childth4.connectwithCallback(&childth1);
    
    childth1.start();
    childth2.start();
    childth3.start();
    childth4.start();

    this_thread::sleep_for(chrono::seconds(1));

   CHECK_EQUAL(115, childth1.success_count());
   CHECK_EQUAL(0, childth1.fail_count());

   CHECK_EQUAL(115, childth2.success_count());
   CHECK_EQUAL(0, childth2.fail_count());

   CHECK_EQUAL(115, childth3.success_count());
   CHECK_EQUAL(0, childth3.fail_count());

   CHECK_EQUAL(115, childth4.success_count());
   CHECK_EQUAL(0, childth4.fail_count());
}



int main()
{
   
    return UnitTest::RunAllTests();
}

