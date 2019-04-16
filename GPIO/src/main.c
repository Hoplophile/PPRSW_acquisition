#include <asf.h>

#define MY_LED IOPORT_CREATE_PIN(PORTD, 5)

int main (void) {
	
	ioport_set_pin_dir(MY_LED, IOPORT_DIR_OUTPUT);
	ioport_set_pin_level(MY_LED, true);
	
	while (1) {
		
	}
}
