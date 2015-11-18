///@file	Practice 4.0
///@author	zhaowei
///@date	2015.11.18

#include <ctype.h>
#include <string.h>
#include <stdio.h>

///@brief	测试通过字符指针传递参数，在函数内部修改后是否会影响外部调用者
char* func(char* s) {
	int len = strlen(s);
	int i = 0;
	printf("%s\n", s);

	///@IMPORTANT:
	/*
	这么写是会报RUNTIME ERROR，因为修改了常量。一般情况下，char s[] = "hello";声明的是字符数组，是变量，存放在栈中，它的大小为6，包含一个'\0'；
	而char* s = "hello";是一个字符串常量，相当于const char* s = "hello";s所指向的内容是常量，被存放在常量内存区域，故不可以修改。这里只需要将char* s改为char s[]即可。
	*/
// 	while (s[i] != '\0') {
// 		s[i] = s[i] + 'a' - 'A';
// 		i++;
// 	}
	return s;
}

///@brief	func的修改版本1，将参数类型改为字符数组
///@note	该函数通过在函数内部修改字符数组s，可以影响到外部的s。
char* func1(char s[]) {
	int len = strlen(s);
	int i = 0;
	while (s[i] != '\0') {
		s[i] -= 'a' - 'A';
		i++;
	}
	return s;
}

///@brief	func的修改版本2，除去字符数组和字符指针的影响，单看指针在函数内部的修改是否会影响到外部
///@note	会影响。
void func2(char* s) {
	*s = 'Z';
}

int main() {
	char s[] = "helloworld";
	char* t = func1(s);
	printf("Befor: %s\nAfter: %s\n", s, t);

	char a = 'a';
	char* ap = &a;
	func2(ap);
	printf("%c\n", a);
	return 0;
}

