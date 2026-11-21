/* HackerRank - Playing With Characters (Easy) */
#include <stdio.h>

int main(void) {
    char ch;
    char s[100], sen[100];
    scanf("%c", &ch);
    scanf("%s", s);
    scanf("\n");
    scanf("%[^\n]%*c", sen);
    printf("%c\n%s\n%s\n", ch, s, sen);
    return 0;
}
