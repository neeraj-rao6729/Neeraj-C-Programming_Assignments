#include <stdio.h>

int main() {
    int n, i, j, space;
    scanf("%d", &n);

    for(i = 1; i <= (n+1)/2; i++) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }

        space = 2*(n-i)-1;

        for(j = 1; j <= space; j++) {
            printf(" ");
        }

        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    for(i = (n-1)/2; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }

        space = 2*(n-i)-1;

        for(j = 1; j <= space; j++) {
            printf(" ");
        }

        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}