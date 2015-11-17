///@file	Practice 4.1
///@author	zhaowei
///@date	2015.11.17

#include <string.h>
///@brief	反转字符串
///@param	s	字符串
void revertStr(char* &str) {
	int len = strlen(str);
	for (int i = 0; i != len / 2; i++) {
		char tmp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = tmp;
	}
}

///@brief	在s中找到最后一个与t匹配的下标位置，如果不存在则返回-1
///@param	s	源字符串
///@param	t	目标字符串
///@return	返回t在s中最右边出现的下标，如果不存在则返回-1
int strrindex(char* s, char* t) {
	int lens = strlen(s);
	int lent = strlen(t);
	int i = 0, j = 0, k = 0;
	for (i = lens - 1; i >= 0; i--) {
		for (j = i, k = lent - 1; k >= 0 && s[j] == t[k]; j--, k--)
			;	//	空语句，跳出时完成一次单词匹配
		if (k < lent - 1 && k == -1)		return j + 1;
	}
	return -1;
}

int main() {
	char* s = "hello world hello world hello";
	char* t = "world";
	int rslt = strrindex(s, t);
	return 0;
}