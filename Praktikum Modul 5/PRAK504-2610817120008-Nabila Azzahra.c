#include <stdio.h>

int reverse(int n) {
    int hasil = 0;

    while (n > 0) {
        int digit = n % 10;
        hasil = hasil * 10 + digit;
        n /= 10;
    }

    return hasil;
}

int main() {
    int A, B, C;

    for (int i = 0; i < 3; i++) {
        scanf("%d %d", &A, &B);

        A = reverse(A);
        B = reverse(B);

        C = A + B;

        printf("%d\n\n", reverse(C));
    }

    return 0;
}