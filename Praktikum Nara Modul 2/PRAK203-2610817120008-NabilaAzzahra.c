#include <stdio.h>

void hitung() {
    double a, b, i, j, x, y, hasil;

    scanf("%lf %lf %lf %lf %lf %lf",
          &a, &b, &i, &j, &x, &y);

    hasil = ((a - b) * i / j) - (x + y);

    printf("Output:\n");
    printf("%.3f\n", hasil);
}

int main() {
    hitung();
    hitung();

    return 0;
}