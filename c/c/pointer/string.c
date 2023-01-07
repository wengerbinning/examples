#include <stdio.h>

struct dev_led_t {
	int   	id;
	char   *label;
	char   *pattern;
};



static struct dev_led_t led[] = {
	{0, "system", "powered_on"},
	{1, "usb", "usb_mount"},
	{2, "wifi", "wifi_on"},
	{3, "port1", "lan1_link"},
	{4, "port2", "lan2_link"},
	{5, "port3", "lan3_link"},
	{6, "port4", "lan4_link"}
};



int main(int argc, char * argv[]) {

	for(int i = 0; i < 7; i++) {
		printf("LED -> id: %d, label: %s, pattern: %s\n", led[i].id, led[i].label, led[i].pattern);
	}


	return 0;
}
