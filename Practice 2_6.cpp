///@file Practice 2.6
///@author	zhaowei
///@date	2015.11.07
#include <stdio.h>

///@brief	��x�дӵ�pλ�������𣩿�ʼ��nλ����Ϊy�����ұߵ�nλ���������ұߵ�һλ�ǵ�0λ.
///@note	�Ƚ�x�е���nλ��Ϊ0��Ȼ���y������nλ�ƶ�����Ӧλ�ã������������㡣
int setbits(int x, int p, int n, int y) {
	return (x & ~(~(~0 << n) << (p - n + 1))) | ((y & ~(~0 << n)) << (p - n + 1));
}

int main() {
	int rslt = setbits(19, 2, 2, 7);
	return 0;
}