/* LeetCode 28 - Find the Index of the First Occurrence in a String (Easy-Medium) */
#include <string.h>

int strStr(char* haystack, char* needle) {
    int n = (int)strlen(haystack), m = (int)strlen(needle), i, j;
    if (m == 0) return 0;
    for (i = 0; i + m <= n; i++) {
        for (j = 0; j < m && haystack[i + j] == needle[j]; j++)
            ;
        if (j == m) return i;
    }
    return -1;
}
