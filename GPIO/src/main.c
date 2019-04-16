#include <asf.h>

#define MY_LED		IOPORT_CREATE_PIN(PORTD, 5)
#define MY_BUTTON	IOPORT_CREATE_PIN(PORTE, 5)

int main (void) {
	
	bool buttonState = false;
	
	ioport_init();
	ioport_set_pin_dir(MY_LED, IOPORT_DIR_OUTPUT);
	ioport_set_pin_level(MY_LED, false);
	ioport_set_pin_dir(MY_BUTTON, IOPORT_DIR_INPUT);
	ioport_set_pin_mode(MY_BUTTON, IOPORT_MODE_PULLUP);
	
	while (1) {
		
		buttonState = ioport_get_pin_level(MY_BUTTON);
		ioport_set_pin_level(MY_LED, !buttonState);
	}
}
