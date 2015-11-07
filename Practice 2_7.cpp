///@file	Practice 2.7
///@author	zhaowei
///@date	2015.11.07

///@brief	将x从p开始的n位求反，其余各位保持不变
///@note	类似Practice2.6，构造一个数，使其从p开始的n位均为1，其余各位为0，然后让x与其异或即可。
int invert(const int& x, const int& p, const int& n) {
	if (p < n)	return -1;
	return (~(~0 << n) << (p - n + 1)) ^ x;
}

int main() {
	int rslt = invert(19, 2, 2);
	return 0;
}