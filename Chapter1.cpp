#include <stdio.h>

int main() {
	float fahr, celsius;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;
//	printf("%d %o %x\n", upper, upper, upper);
	fahr = lower;
	printf("Temperature Conversion - Fahrenheit To Celsius\n");
	printf("Fahrenheit       Celsius\n");
	while (fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%6.0f           %6.3f\n", fahr, celsius);
		fahr = fahr + step;
	}
	celsius = lower;
	printf("\n\n");
	printf("Temperature Conversion - Celsius To Fahrenheit\n");
	printf("Celsius          Fahrenheit\n");
	while (celsius <= upper) {
		fahr = (9.0 / 5.0) * celsius + 32.0;
		printf("%6.0f           %6.3f\n", celsius, fahr);
		celsius = celsius + step;
	}
	return 0;
}