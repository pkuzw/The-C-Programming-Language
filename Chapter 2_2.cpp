///@file	Practice 2.4
///@author	zhaowei
///@date	2015.11.06
#include <stdio.h>

///@brief	清除字符串之间的多余空格符
///@note	时间复杂度为O(n)，空间复杂度为O(1)
void squeeze (char s[]) {
	int i = 0, j = 0;
	while(s[i] != '\0') {
		if (s[i] != ' ' || (s[i] == ' ' && i > 0 && s[i-1] != ' ')) 
			s[j++] = s[i];					
		i++;
	}
	s[j] = '\0';
}

int main() {
	char s[] = "hello   world   bye-bye    yike";	
	printf("%s\n", s);
	squeeze(s);
	printf("%s\n", s);
	return 0;
}