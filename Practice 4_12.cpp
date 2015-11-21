///@file	Pracitce 4.12
///@author	zhaowei
///@date	2015.11.21
#include <stdlib.h>

///@brief	递归计算数字
///@param	x	数字
///@param	str	字符串
///@param	i	字符串位数
///@note	递归，先将x缩小到只剩个位数，然后输出这个个位数，后移字符串下标，然后返回上一级。
void helper(int x, char* &str, int& i) {
	if (x < 0) {
		str[i++] = '-';
		x = -x;
	}
	if (x / 10) 
		helper(x / 10, str, i);
	str[i++] = x % 10 + '0';
}

///@brief	递归版本的itoa
///@param	x	整数x，可能为负
///@return	返回字符串型的x
///@note	利用递归的思想来处理
char* itoa(int x) {
	int i = 0;
	char* str = (char*)malloc(20);
	helper(x, str, i);
	str[i] = '\0';
	return str;
}

int main() {
	int x = -54321;
	char* rslt = itoa(x);
	return 0;
}