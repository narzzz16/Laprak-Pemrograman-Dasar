#include <stdio.h>

int main() {
    int n, kelipatan, jumlah, total = 0;

    scanf("%d %d", &n, &kelipatan);

    for (int i = 1; i <= n; i++) {
        jumlah = 0;

        for (int j = i; j >= 1; j--) {
            printf("(%d * %d)", j, kelipatan);

            jumlah += j * kelipatan;

            if (j > 1) {
                printf(" + ");
            }
        }

        printf(" = %d\n", jumlah);
        total += jumlah;
    }

    printf("%d\n", total);

    return 0;
}