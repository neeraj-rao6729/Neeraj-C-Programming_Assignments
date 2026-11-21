/* HackerRank - Beautiful Days at the Movies (Easy-Medium) */
#include <stdio.h>
#include <stdlib.h>

int reverseNum(int x) {
    int r = 0;
    while (x > 0) {
        r = r * 10 + x % 10;
        x /= 10;
    }
    return r;
}

int main(void) {
    int i, j, k, day, count = 0;
    scanf("%d %d %d", &i, &j, &k);
    for (day = i; day <= j; day++)
        if (abs(day - reverseNum(day)) % k == 0) count++;
    printf("%d\n", count);
    return 0;
}
