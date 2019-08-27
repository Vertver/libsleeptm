# libsleeptm - simple cross-platform library to manipulate with time.

# License - Unlicense. Just for free :)

# How to use

```cpp
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
```

# Supported platforms
* Windows (2000 or higher)
* POSIX (Linux, FreeBSD or other POSIX platform)
* and other

