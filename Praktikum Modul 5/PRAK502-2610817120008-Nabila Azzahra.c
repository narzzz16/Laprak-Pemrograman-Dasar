#include <stdio.h>

int hitung(int nilai1, int nilai2) {
    int hasil = nilai1 - nilai2;

    if (hasil < 0) {
        hasil = -hasil;
    }

    return hasil;
}

int mutlak(int angka) {
    if (angka < 0) {
        angka = -angka;
    }

    return angka;
}

int main() {
    int a, b, c, d;

    for (int i = 0; i < 3; i++) {
        scanf("%d %d %d %d", &a, &c, &b, &d);

        int hasil = hitung(a, b) + hitung(c, d);

        printf("%d\n\n", mutlak(hasil));
    }

    return 0;
}