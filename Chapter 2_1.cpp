///@file	Practice 2-3
///@author	zhaowei
///@date	2015.11.06
#include <stdio.h>

int htoi(char s[]) {
	int rslt = 0;
	int i = 2;
	while (s[i] != '\0') {
		if (s[i] <= 'f' && s[i] >= 'a')
			rslt = rslt * 16 + (s[i] - 'a' + 10);
		else if (s[i] <= 'F' && s[i] >= 'A')
			rslt = rslt * 16 + (s[i] - 'A' + 10);
		else
			rslt = rslt * 16 + (s[i] - '0');
		i++;
	}
	return rslt;
}

int main() {
	char s[] = "0x2d79F";
	int r = htoi(s);
	printf("%d\n", r);
	return 0;
}