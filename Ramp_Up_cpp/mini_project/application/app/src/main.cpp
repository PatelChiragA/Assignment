#include "headerfiles.h"
#include "mainthread.h"
bool exitFlag = false;

void sigHandler(int)
{
    exitFlag = true;
}

int main()
{
    mainthread p;
   
    while (1)
    {
        if(true == exitFlag)
        {
            break;
        }
    }

}
	
