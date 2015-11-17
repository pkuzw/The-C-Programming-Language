///@file	Practice 4.2
///@author	zhaowei
///@date	2015.11.17
#include <ctype.h>

///@brief	将字符串转换成双精度浮点数，支持带有正负号指数'E'或'e'的表示
///@param	s	字符串
///@return	返回s对应的高精度值
///@note	底数和指数部分分开处理
double atof(char* s) {
	double val, power;	//	val最后的结果，power是要进行加倍或缩小的10的整数倍
	int i, sign;
	for (i = 0; isspace(s[i]); i++)	;
	sign = s[i] == '-' ? -1 : 1;
	if (s[i] == '-' || s[i] == '+')	i++;
	for (val = 0.0; isdigit(s[i]); i++)
		val = 10.0 * val + (s[i] - '0');
	if (s[i] == '.')	i++;
	for (power = 1.0; isdigit(s[i]); i++) {
		val = 10.0 * val + (s[i] - '0');
		power *= 10.0;
	}
	if (s[i] == 'e' || s[i] == 'E') {
		i++;
		bool esign = true;	//	指数的符号
		int expo = 0;	//	指数的绝对值
		while (s[i] != '\0') {
			if (s[i - 1] == 'e' || s[i - 1] == 'E')	esign = s[i] == '-' ? false : true;
			if (s[i] == '+' || s[i] == '-'){
				i++;continue;
			}
			expo = expo * 10 + (s[i] - '0');
			i++;
		}
		while (expo--) {
			if (esign)	power /= 10.0;
			else power *= 10.0;			
		}
	}
	return sign * val / power;
}

int main() {
	char* s = "-0.123456789E+10";
	double rslt = atof(s);
	return 0;
}