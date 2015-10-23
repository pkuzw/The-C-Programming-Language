#include <stdio.h>

// Practice 1-9
int main() {
	int pre = 0;
	int c = getchar();
	pre = c;
	putchar(c);
	while ((c = getchar()) != EOF) {
		if (pre == ' ' && c == ' ') continue;
		putchar(c);
		pre = c;
	}
	return 0;
}