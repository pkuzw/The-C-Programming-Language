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

///@brief	将字符串s1中任何与s2中字符匹配的字符都删除
///@note	时间复杂度为O(n^2)，空间复杂度为O(1)。
void squeeze_s1_s2(char s1[], char s2[]) {
	int i = 0, j = 0;
	while (s1[i] != '\0') {
		int k = 0;
		bool flg = false;	//	标记s1[i]是否在s2中出现
		while (s2[k] != '\0') {
			if (s1[i] == s2[k]) {
				i++;
				flg = true;
				break;
			}
			k++;
		}
		if (!flg) {
			s1[j++] = s1[i++];
		}
		else continue;		
	}
	s1[j] = '\0';
}

int main() {
	char s[] = "hello   world   bye-bye    yike";	
	printf("%s\n", s);
	squeeze(s);
	printf("%s\n", s);

	char s1[] = "helloween";
	char s2[] = "world";
	squeeze_s1_s2(s1, s2);
	printf("%s\n", s1);
	return 0;
}