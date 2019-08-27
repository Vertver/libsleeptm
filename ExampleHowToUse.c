#include "libsleeptm.h"
#include <stdio.h>

int
main(int argc, char* argv[])
{
	unsigned long CurrentTime = 0;
	if (slInitialize(1) == -1) return -1;

	while (!GetAsyncKeyState(VK_ESCAPE))
	{
		slMicroSleep(1000);
		slGetSystemTime32(&CurrentTime);
		printf("Current Time - %u", CurrentTime);
	}

	slUnitialize();
	return 0;
}
