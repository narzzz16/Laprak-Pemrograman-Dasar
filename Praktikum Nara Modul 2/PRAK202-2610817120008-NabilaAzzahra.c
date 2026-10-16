#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nilai_pertama[100], nilai_kedua[100];
    double hasil;

    printf("Masukkan Nilai Pertama : ");
    fgets(nilai_pertama, sizeof(nilai_pertama), stdin);
    nilai_pertama[strcspn(nilai_pertama, "\n")] = '\0';

    printf("Masukkan Nilai Kedua : ");
    fgets(nilai_kedua, sizeof(nilai_kedua), stdin);
    nilai_kedua[strcspn(nilai_kedua, "\n")] = '\0';

    hasil = atof(nilai_pertama) + atof(nilai_kedua);

    printf("Hasil dari penjumlahan nilai pertama \"%s\" "
           "dan nilai kedua \"%s\" adalah \"%.2f\"\n",
           nilai_pertama, nilai_kedua, hasil);

    return 0;
}