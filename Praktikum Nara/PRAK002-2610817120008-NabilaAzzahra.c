#include <stdio.h>

int  main() {
    char Nama[50];

    printf("Masukkan nama mahasiswa:");
    scanf("%49[^\n]", Nama);
    printf("Selamat Pagi, %s\n", Nama);
    printf("Selamat Siang, %s\n", Nama);
    printf("Selamat Malam, %s\n", Nama);

    return 0;
}