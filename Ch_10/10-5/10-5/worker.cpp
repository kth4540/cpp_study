#include "timer.h"
#include "worker.h"


void worker::dosome()
{
	Timer timer;	//start timer
					//do some work here
	timer.elapsed();	//end timer and report elapsed time
}
