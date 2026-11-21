/* LeetCode 709 - To Lower Case (Easy) */
char* toLowerCase(char* s) {
    int i;
    for (i = 0; s[i] != '\0'; i++)
        if (s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i] + ('a' - 'A');
    return s;
}
