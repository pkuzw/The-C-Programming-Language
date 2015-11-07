///@file	Practice 1-15
///@author	zhaowei
///@date	2015.10.28
#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int FahrenheitToCelsius(const int& fahr) {
	return (5.0 / 9.0) * (fahr - 32.0);
}

int main() {
	float fahr = 0, celsius = 0;
	fahr = LOWER;
	printf("Temperature Conversion - Fahrenheit To Celsius\n");
	printf("Fahrenheit       Celsius\n");
	while (fahr <= UPPER) {
		celsius = FahrenheitToCelsius(fahr);
		printf("%6.2f           %6.2f\n", fahr, celsius);
		fahr = fahr + STEP;
	}
	return 0;
}