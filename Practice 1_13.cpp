///@file	Practice 1-13
///@author	zhaowei
///@date	2015.10.28
#include <stdio.h>

void printHistogram(const int& word_len) {
	for (int i = 0; i != word_len; i++)	printf("*");
	printf("\n");
}

int main() {
	int c = 0;
	int cnt = 0;
	bool flg = false;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			if (!flg) {
				printHistogram(cnt);
				cnt = 0;
				flg = true;
			}
		}
		else {
			cnt++;
			flg = false;
		}
	}
	return 0;
}