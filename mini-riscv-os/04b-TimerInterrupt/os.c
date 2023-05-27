#include "os.h"

int os_main(void)
{
	lib_puts("OS start\n");
	timer_init(); // start timer interrupt ...
	while (1) {
            lib_puts("os_main:loop\n");
            lib_delay(500);
        } // os : do nothing, just loop!
	return 0;
}

