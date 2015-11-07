///@file	Pracitce 2.10
///@author	zhaowei
///@date	2015.11.07
#include <stdio.h>

///@brief	用条件表达式重写lower()函数
char lower(char s) {
	return s <= 'Z' && s >= 'A' ? s - 'A' + 'a' : s;		
}

int main() {
	int c = 0;
	while ((c = getchar()) != EOF) {
		printf("%c", lower(c));
	}
	return 0;
}