///@file	Practice 3.3
///@author	zhaowei
///@date	2015.11.16
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

///@brief	将类似"a-e"这样的缩写字符串扩展成"abcde"这样的完全字符串
///@param	s1	缩写字符串指针
///@param	s2	扩充后的字符串。字符串指针也是可以传引用的，这样函数内部对其所进行的任何修改，调用者也能够获取。
///@note	对字符串指针中各位的访问可以通过数组元素下标访问符来进行，字符串的长度通过strlen来获取，包含在<string.h>头文件中，每个字符串以'\0'	结束。
void expand(char* s1, char* &s2) {
	int len1 = strlen(s1);
	s2 = (char*)malloc(100);
	memset(s2, 0, 100);
	int j = 0;
	for (int i = 0; i != len1; i++) {
		if (s1[i] == '-') {
			if (i == 0 || i == len1 - 1)	s2[j++] = '-';	//	处理首尾字符是'-'的情形
			else {
				for (; s2[j - 1] != s1[i + 1]; j++)	//	扩充字符串，如果当前字符还不是'-'后的那个字符，就继续扩充
					s2[j] = s2[j - 1] + 1;
			}
		}
		else {
			if (s2[j - 1] == s1[i])	continue;
			else	s2[j++] = s1[i];
		}		
	}
	s2[j] = '\0';	//	给s2的末尾添加字符串结束符
}

int main() {
	char *s1 = "-a-bX-Z0-7-";
	char *s2;
	expand(s1, s2);
	printf("Abbriviation: %s\nExtension: %s\n", s1, s2);
	return 0;
}