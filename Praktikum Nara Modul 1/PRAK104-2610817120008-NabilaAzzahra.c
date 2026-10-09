#include <stdio.h>

int main() {
    int harga_a = 400000;
    int harga_b = 350000;

    int harga_a_diskon = harga_a - (harga_a * 13 / 100);
    int harga_b_diskon = harga_b - (harga_b * 21 / 100);

    printf("Harga sepatu A adalah %d\n", harga_a);
    printf("Harga sepatu B adalah %d\n", harga_b);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", harga_a_diskon);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n", harga_b_diskon);

    return 0;
}