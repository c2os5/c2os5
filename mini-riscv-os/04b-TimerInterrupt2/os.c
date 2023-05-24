#include "os.h"

int os_main(void)
{
	lib_puts("OS start\n");
	timer_init(); // start timer interrupt ...
	while (1) { // os : do nothing, just loop!
		lib_puts("os again!\n");
		lib_delay(100);
	}
	return 0;
}

