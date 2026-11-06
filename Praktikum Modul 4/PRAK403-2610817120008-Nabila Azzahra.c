#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, langkah;
    int angka1, angka2;

    printf("Masukkan dua angka: ");
    scanf("%d %d", &a, &b);

    if (a < b) {
        langkah = 1;
    } else {
        langkah = -1;
    }

    for (int i = 0; i <= abs(b - a); i++) {
        angka1 = a + (i * langkah);
        angka2 = b - (i * langkah);

        if (i > 0) {
            printf("- ");
        }

        printf("%d %d ", angka1, angka2);
    }

    return 0;
}