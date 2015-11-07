///@file	练习1-12
///@author	zhaowei
///@date	2015.10.28
#include <stdio.h>
int main() {
	int c = 0;
	bool flg = false;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '	') {	//	对于多个空格只换行一次
			if (!flg) {
				flg = true;
				putchar('\n');
			}
		}
		else {
			flg = false;
			putchar(c);
		}
	}
	return 0;
}