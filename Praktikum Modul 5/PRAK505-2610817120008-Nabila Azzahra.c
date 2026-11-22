#include <stdio.h>

void Biodata(int tahunLahir, char nama[], char asal[]) {
    int tahun_sekarang = 2020;
    int umur = tahun_sekarang - tahunLahir;

    printf("Perkenalkan Nama Saya : %s\n", nama);
    printf("Umur Saya : %d\n", umur);
    printf("Saya Adalah Angkatan : %d\n", tahun_sekarang);
    printf("Asal Saya dari : %s\n", asal);
}

int main() {
    int tahunLahir;
    char Namaku[20], Asal[15];

    for (int i = 0; i < 2; i++) {
        scanf("%d", &tahunLahir);
        scanf(" %19[^\n]", Namaku);
        scanf(" %14[^\n]", Asal);

        Biodata(tahunLahir, Namaku, Asal);
        printf("\n");
    }

    return 0;
}