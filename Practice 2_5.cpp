///@file	Practice 2.5
///@author	zhaowei
///@date	2015.11.07
#include <stdio.h>

///@brief	寻找s1中第一次出现s2中任意字符的下标，如果不存在则返回-1
int any(char s1[], char s2[]) {
	int i = 0;
	while (s1[i] != '\0') {
		int j = 0;
		while (s2[j] != '\0') {
			if (s1[i] == s2[j])	return i;
			j++;
		}
		i++;
	}
	return -1;
}

int main() {
	char s1[] = "aa", s2[] = "bc";
	int rslt = any(s1, s2);
	return 0;
}