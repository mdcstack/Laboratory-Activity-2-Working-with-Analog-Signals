
int pins[5] = { 12, 11, 10, 9, 8 };


void setup() {
	int i = 0;
	while (i < 5) {
		pinMode(pins[i], OUTPUT);
		i++;
	}
}

void loop() {
	int on = 0;


	while (on < 5) {
		int brightness = 0;
		while (brightness <= 255) {
			analogWrite(pins[on], brightness);
			delay(10);
			brightness++;
		}
		delay(1000);
		on++;
	}

	int off = 0;
	while (off < 5) {
		int brightness = 255;
		while (brightness >= 0) {
			analogWrite(pins[off], brightness);
			delay(10);
			brightness--;
		}
		delay(1000);
		off++;
	}
}
