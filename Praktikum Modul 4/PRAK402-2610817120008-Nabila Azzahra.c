#include <stdio.h>

int main() {
    int batas;
    int mulai;

    printf("Masukkan batas maksimal: ");
    scanf("%d", &batas);

    printf("Bilangan ganjil:\n");
    for (int i = 1; i <= batas; i += 2) {
        printf("%d ", i);
    }

    printf("\n");

    printf("Bilangan genap:\n");
    if (batas % 2 == 0) {
        mulai = batas;
    } else {
        mulai = batas - 1;
    }

    for (int i = mulai; i >= 2; i -= 2) {
        printf("%d ", i);
    }

    return 0;
}