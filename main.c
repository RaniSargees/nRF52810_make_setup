#include <nrf.h>
#include <nrf_delay.h>
#include <nrf_gpio.h>

int main(void) { //cycles an RGB LED through 6 states
	nrf_gpio_cfg_output(19); //red
	nrf_gpio_cfg_output(17); //green
	nrf_gpio_cfg_output(15); //blue

	uint8_t led = 0;
	while (1) {
		nrf_delay_ms(200);
		nrf_gpio_pin_toggle(19 - ((++led % 2) * 2));
	}
}