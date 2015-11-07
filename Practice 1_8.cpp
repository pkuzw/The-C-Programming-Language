#include <stdio.h>

// Practice 1-8
int main() {
	int c = 0;
	int sp_cnt = 0, tbl_cnt = 0, chl_cnt = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ') sp_cnt++;
		else if (c == '\t') tbl_cnt++;
		else if (c == '\n') chl_cnt++;
	}
	printf("Space Number: %d\nTable Number: %d\nLine Number: %d\n", sp_cnt, tbl_cnt, chl_cnt);
	return 0;
}