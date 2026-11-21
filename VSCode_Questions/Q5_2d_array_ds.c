/* HackerRank - 2D Array - DS (Easy): maximum hourglass sum in a 6x6 grid */
#include <stdio.h>

int main(void) {
    int a[6][6], i, j, best = -63;   /* smallest possible sum is 7 * -9 */
    for (i = 0; i < 6; i++)
        for (j = 0; j < 6; j++) scanf("%d", &a[i][j]);

    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++) {
            int sum = a[i][j] + a[i][j + 1] + a[i][j + 2]
                    + a[i + 1][j + 1]
                    + a[i + 2][j] + a[i + 2][j + 1] + a[i + 2][j + 2];
            if (sum > best) best = sum;
        }
    printf("%d\n", best);
    return 0;
}
