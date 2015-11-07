///@file	Practice 2.9
///@author	zhaowei
///@date	2015.11.07

///@brief	利用x &= x - 1来计算x中1位的个数。
int bitcount(unsigned x) {
	int cnt = 0;
	while (x) {
		x &= x - 1;
		cnt++;
	}
	return cnt;
}

int main() {
	int rslt = bitcount(31);
	return 0;
}