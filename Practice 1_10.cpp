///@file	Practice 1.10
///@author	zhaowei
///@date	2015.11.07
#include <stdio.h>
#include <conio.h>

int main() {
	int c = 0;
	while ((c = getch()) != EOF) {	// the difference between getchar() & getch() is the previous one will store the input into the buffer, but the latter one just return at once without display.
		if (c == '\b') 	printf("\\b");
		else if (c == '	') printf("\\t");
		else if (c == '\\') printf("\\\\");
		else if (c == '\r') break;	//	press "enter" to quit
		else putchar(c);
	}
	return 0;
}