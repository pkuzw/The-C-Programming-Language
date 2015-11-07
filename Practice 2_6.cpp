///@file Practice 2.6
///@author	zhaowei
///@date	2015.11.07
#include <stdio.h>

///@brief	将x中从第p位（从右起）开始的n位设置为y中最右边的n位。假设最右边的一位是第0位.
///@note	先将x中的这n位置为0，然后把y的最右n位移动到对应位置，两者做或运算。
int setbits(int x, int p, int n, int y) {
	return (x & ~(~(~0 << n) << (p - n + 1))) | ((y & ~(~0 << n)) << (p - n + 1));
}

int main() {
	int rslt = setbits(19, 2, 2, 7);
	return 0;
}