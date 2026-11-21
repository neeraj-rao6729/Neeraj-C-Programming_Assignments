/* LeetCode 344 - Reverse String (Easy) */
void reverseString(char* s, int sSize) {
    int i = 0, j = sSize - 1;
    while (i < j) {
        char t = s[i];
        s[i++] = s[j];
        s[j--] = t;
    }
}
