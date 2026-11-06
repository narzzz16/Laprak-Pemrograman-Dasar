#include <stdio.h>

int main() {
    const char nama[] = "Nabila Azzahra";
    int pilihan;
    double nilai1, nilai2, hasil;
    const char *operasi;

    while (1) {
        printf("\nPilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");

        printf("Masukkan Pilihan : ");
        scanf("%d", &pilihan);

        if (pilihan == 5) {
            printf("Terimakasih, telah menggunakan kalkulator %s\n", nama);
            break;
        }
        else if (pilihan >= 1 && pilihan <= 4) {
            printf("Masukkan nilai pertama : ");
            scanf("%lf", &nilai1);

            printf("Masukkan nilai kedua : ");
            scanf("%lf", &nilai2);

            if (pilihan == 1) {
                hasil = nilai1 + nilai2;
                operasi = "penjumlahan";
            }
            else if (pilihan == 2) {
                hasil = nilai1 - nilai2;
                operasi = "pengurangan";
            }
            else if (pilihan == 3) {
                hasil = nilai1 * nilai2;
                operasi = "perkalian";
            }
            else {
                if (nilai2 == 0) {
                    printf("Tidak dapat membagi dengan nol\n");
                    continue;
                }
                hasil = nilai1 / nilai2;
                operasi = "pembagian";
            }

            printf("Hasil %s antara %.2f dengan %.2f adalah %.2f\n",
                   operasi, nilai1, nilai2, hasil);
        }
        else {
            printf("Input anda salah, silahkan coba lagi\n");
        }
    }

    return 0;
}