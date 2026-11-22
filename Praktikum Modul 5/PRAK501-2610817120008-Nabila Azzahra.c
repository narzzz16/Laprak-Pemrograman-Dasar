#include <stdio.h>

int MaxBilangan(int a, int b, int c, int d) {
    int maks = a;

    if (b > maks) {
        maks = b;
    }
    if (c > maks) {
        maks = c;
    }
    if (d > maks) {
        maks = d;
    }

    return maks;
}

int main() {
    int a, b, c, d;

    for (int i = 0; i < 3; i++) {
        scanf("%d %d %d %d", &a, &b, &c, &d);

        int hasil = MaxBilangan(a, b, c, d);

        printf("%d\n\n", hasil);
    }

    return 0;
}