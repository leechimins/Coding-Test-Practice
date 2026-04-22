#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char s[101], alpha[27];
	int i, wlen, notFound = 0;
	int index[26] = { 0 };
	
	//! alpha에 알파벳 26자를 삽입 후 마지막에 널문자 추가
	for (i = 0; i < 26; i++)
		alpha[i] = 'a' + i;
	alpha[i] = '\0';
	//! 단어 입력받고 길이 측정하기
	scanf("%s", s);
	for (wlen = 0; s[wlen] != '\0'; wlen++);

	//! 알파벳을 순서대로 검사
	for (i = 0; i < 26; i++) {
		//! 한 알파벳이 단어에 등장하는지 확인 후 index에 위치값 삽입
		for (int j = 0; j < wlen; j++)
			if (alpha[i] == s[j]) {
				notFound = 0;
				index[i] = j;
				break;
			}
			else
				notFound = 1;
		if (notFound)
			index[i] = -1;

		printf("%d ", index[i]);
	}

	return 0;
}