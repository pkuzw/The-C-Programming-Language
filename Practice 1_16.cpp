///@file	Practice 1-16
///@author	zhaowei
///@date	2015.11.05
#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);

void copy(char to[], char from[]);

int main() {
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];
	max = 0;
	while ((len = getline(line, MAXLINE)) > 0)
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	if (max > 0)
		printf("%s", longest);
	return 0;
}

int getline(char s[], int lim) {
	int c, i;
	int j = 0;
	for (i = 0; (c = getchar()) != EOF && c != '\n'; i++) {
		if (i < lim - 2)	s[j++] = c;
	}
	if (c == '\n') {
		s[j++] = c;
		i++;
	}
	s[j] = '\0';
	return i;
}

void copy(char to[], char from[]) {
	int i = 0;
	while ((to[i] = from[i]) != '\0') i++;
}