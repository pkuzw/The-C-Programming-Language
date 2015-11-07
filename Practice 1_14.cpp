///@file	Practice 1-14
///@author	zhaowei
///@date	2015.10.28
#include <stdio.h>
#include <string.h>

int main() {
	int cnt[256] = {0};
	memset(cnt, 0, 256 * sizeof(int));
	int c = 0;	
	while ((c = getchar()) != EOF) {
		cnt[c]++;		
	}
	for (int i = 0; i != 256; i++) {
		if (cnt[i]) {
			printf("%c : %d\t", i, cnt[i]);
			for (int j = 0; j != cnt[i]; j++)	
				putchar('*');
			putchar('\n');
		}
	}
	return 0;
}