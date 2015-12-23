///@file	检验P90的字符串常量和字符数组的表达与修改
///@author	zhaowei
///@date	2015.12.23

#include <stdio.h>

int main() {
	char* s = "hello world";
	char t[] = "zhao wei";

//	s[1] = 'o';	//error: "hello world"作为字符串常量，s只是一个char*型的指针，不能修改字符串常量，但是能够改变自己的指向。
	t[1] = 'z';	//ok: 字符串常量就是保存在名为t的一维字符数组中，可以被修改。
	printf("%s\n%s\n", s, t);
	return 0;
}