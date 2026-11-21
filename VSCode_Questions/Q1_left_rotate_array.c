/* HackerEarth - Left rotate an array (Easy-Medium)
   ASSUMED input format: first line T (test cases); each test: "N D" on one line,
   then N integers. Rotates left by D and prints the result.
   Check the exact format on the problem page and adjust scanf if it differs. */
#include <stdio.h>
#define MAX 100000

int main(void) {
    static int a[MAX];
    int t, n, d, i;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &n, &d);
        for (i = 0; i < n; i++) scanf("%d", &a[i]);
        d %= n;
        for (i = 0; i < n; i++) printf("%d ", a[(i + d) % n]);
        printf("\n");
    }
    return 0;
}
