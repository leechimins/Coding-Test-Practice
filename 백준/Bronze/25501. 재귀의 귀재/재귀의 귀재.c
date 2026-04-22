#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int count(const char* s, int l, int r);
int isPalindrome(const char* s, int l, int r);

int main(void) {
    int t;
    char s[1001];
    
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%s", s);
        printf("%d %d\n", isPalindrome(s, 0, strlen(s) - 1), count(s, 0, strlen(s) - 1));
    }

    return 0;
}

int count(const char* s, int l, int r) {
    if (l >= r || s[l] != s[r]) return 1;
    return 1 + count(s, l + 1, r - 1);;
}

int isPalindrome(const char* s, int l, int r) {
    if (l >= r) return 1;
    if (s[l] != s[r]) return 0;
    isPalindrome(s, l + 1, r - 1);
}
