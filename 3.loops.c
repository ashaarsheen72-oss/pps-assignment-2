#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the limit: ");
    scanf("%d", &n);

    printf("Composite numbers up to %d:\n", n);

    for (i = 4; i <= n; i++) {
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                printf("%d ", i);
                break;
            }
        }
    }

    return 0;
}