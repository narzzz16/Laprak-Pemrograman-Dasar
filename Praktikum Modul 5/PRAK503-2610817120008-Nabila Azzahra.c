#include <stdio.h>

int maksimal(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

int minimal(int a, int b) {
    if (a < b) {
        return a;
    }
    return b;
}

int main() {
    int batas, maks, minim, nilai;

    for (int i = 0; i < 3; i++) {
        scanf("%d", &batas);

        maks = -100000;
        minim = 100000;

        for (int j = 0; j < batas; j++) {
            scanf("%d", &nilai);

            maks = maksimal(maks, nilai);
            minim = minimal(minim, nilai);
        }

        printf("%d %d\n\n", maks, minim);
    }

    return 0;
}