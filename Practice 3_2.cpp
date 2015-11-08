///@file	Practice 3.2
///@author	zhaowei
///@date	2015.11.08

#include <stdio.h>
#include <string.h>

///@brief	将s中的字符复制到t中去，但是要将不可见的字符比如换行符，制表符转换成\n, \t
///@note	char s[], char t[]作为字符数组参数传入函数，该函数内部对t的修改，可以导致外部t所指向内容的改变。
void escape(char s[], char t[]) {
	int i = 0;
	while (s[i] != '\0') {
		switch (s[i]) {
		case '	' : t[i] = '\\t';break;
		case '\n' : t[i] = '\\n';break;
		default: t[i] = s[i];break;
		}
		i++;
	}
}

///@brief	练习将字符串按照char*的类型传入函数如何操作。
///@note	参考：http://www.cnblogs.com/yylqinghao/archive/2010/04/27/1721752.html
//			字符串常量和其他常量一样，与堆、全局数据被放置在32位机器的0x08048000向上增长的内存区域中，常量属于只读数据自然不可以修改。
//			如果是新申请的空间，则放在栈中，在32位的机器上是3G(0xbfffffff)向下的内存中，可以修改。
void escape_astroid(char *s, char *t) {
	int len = strlen(t);
	t[0] = 'z';	//	error
	while (*s != '\0') {
		switch(*s) {
		case '	' : *t = '\\t';break;	//	error
		case '\n' : *t = '\\n';break;	//	error
		default: *t = *s;				//	error
		}
		s++;t++;
	}
}

int main() {
	char s[] = "hello	world\n";
	char t[] = "world hello ";

	printf("%s%s\n", s, t);
	escape(s, t);
	printf("%s\n%s\n", s, t);

	char *a = "hello	world\n";
	char *b = "world helloa";

	printf("%s%s\n", a, b);
	escape_astroid(a, b);
	printf("%s%s\n", a, b);
	return 0;
}