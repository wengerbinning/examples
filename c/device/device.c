#include <stdio.h>
#include <stdlib.h>

#define error(fmt, ...) \
    printf(""fmt"\n", ##__VA_ARGS__)

#define warning(fmt, ...) \
    printf(""fmt"\n", ##__VA_ARGS__)

#define notice(fmt, ...) \
    printf(""fmt"\n", ##__VA_ARGS__)


struct dev_led_t {
	int id;
	const char * label;
	struct dev_led_t *next;
};


struct dev_led_t *dev_led = NULL;


void led_add(const char *label) {
	struct dev_led_t *led = NULL;
	struct dev_led_t *new = dev_led;

	notice("Add %s LED, dev_led %p", label, dev_led);

	if (new != NULL) {
		led = new;
		new = led->next;
	}

	new = (struct dev_led_t *)malloc(sizeof(struct dev_led_t));
	
	notice("malloc for new :%p", new);
	
	notice("test pointer in line: %d", __LINE__);
	if (led) {
		led->next = new;
	} else {
		dev_led = new;
	}
	notice("%d, %d", sizeof(led->next), sizeof(new));

	notice("test pointer in line: %d", __LINE__);
	new->id = 0;
	new->label = label;
	new->next = NULL;
	notice("test pointer in line: %d", __LINE__);
}

void led_dump() {
	struct dev_led_t *led = dev_led;
	
	notice("dev_led %p", dev_led);

	while (led) {
		notice("led id:%d, label:%s", led->id, led->label);
		led = led->next;
	}

}



int main() {
	led_add("system");
	led_add("port1");


	led_dump();

	return 0;

}
