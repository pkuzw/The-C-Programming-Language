///@file	Practice 3.5
///@author	zhaowei
///@date	2015.11.16
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

///@brief	将整数n按照b进制存入s
///@param	n	整数
///@param	s	字符串
///@param	b	进制
///@note	itoa(n, s, b)是将n以b进制的形式保存在字符串s中，自动会添加字符串结束符。要保证s足够大。
void itob(unsigned n, char* &s, int b) {
	itoa(n, s, b);
	return;
}

int main() {
	char *s = (char*)malloc(33);
	unsigned val = 0;
	int base = 0;
	scanf("%d%d", &val, &base);
	itob(val, s, base);
	char *test = (char*)malloc(100);

	//	sprintf(char* s, const char* format, ...)表示将fortmat中的内容保存在字符串s中，并返回写入s的字符个数，自动添加'\0'（不含在返回值内）。
	int k = sprintf(test, "the result of %d is %s under the base %d.", val, s, base);
	printf("result: %s\n", s);
	printf("%d\n%s\n", k, test);
	free(s);
	free(test);
	return 0;
}