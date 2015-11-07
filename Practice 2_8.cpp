///@file	Practice 2.8
///@author	zhaowei
///@date	2015.11.07

#define BYTE_LEN 32

///@brief	向右循环移动n位
///@note	先取模，然后将余数m位提升到高位，剩下的右移m位，二者求或即可。
unsigned rightrot(const unsigned& x, const unsigned& n) {
	unsigned m = n % BYTE_LEN;
	return ((~(~0 << m) & x) << (BYTE_LEN - m)) | (x >> m);
}

int main() {
	unsigned rslt = rightrot(24, 4);
	return 0;
}