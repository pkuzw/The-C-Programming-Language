#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
	float fahr, celsius;
// 	int lower, upper, step;
// 	lower = 0;
// 	upper = 300;
// 	step = 20;
//	printf("%d %o %x\n", upper, upper, upper);
	fahr = LOWER;
	printf("Temperature Conversion - Fahrenheit To Celsius\n");
	printf("Fahrenheit       Celsius\n");
	while (fahr <= UPPER) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%6.0f           %6.3f\n", fahr, celsius);
		fahr = fahr + STEP;
	}
	// reverse output the conversion from high to low.
	for (fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%6.0f           %6.3f\n", fahr, celsius);
	}

	// conver celsius to fahrenheit
	celsius = LOWER;
	printf("\n\n");
	printf("Temperature Conversion - Celsius To Fahrenheit\n");
	printf("Celsius          Fahrenheit\n");
	while (celsius <= UPPER) {
		fahr = (9.0 / 5.0) * celsius + 32.0;
		printf("%6.0f           %6.3f\n", celsius, fahr);
		celsius = celsius + STEP;
	}
	return 0;
}