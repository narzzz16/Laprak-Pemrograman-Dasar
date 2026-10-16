#include <stdio.h>
#include <string.h>

int main() {
    char nama[100], nim[30], kelas[30];
    char tempat_tanggal_lahir[100];
    char alamat[200], hobby[100], no_hp[30];

    printf("Nama : ");
    fgets(nama, sizeof(nama), stdin);

    printf("NIM : ");
    fgets(nim, sizeof(nim), stdin);

    printf("Kelas Paralel : ");
    fgets(kelas, sizeof(kelas), stdin);

    printf("Tempat/Tanggal Lahir : ");
    fgets(tempat_tanggal_lahir, sizeof(tempat_tanggal_lahir), stdin);

    printf("Alamat : ");
    fgets(alamat, sizeof(alamat), stdin);

    printf("Hobby : ");
    fgets(hobby, sizeof(hobby), stdin);

    printf("No. HP : ");
    fgets(no_hp, sizeof(no_hp), stdin);

    nama[strcspn(nama, "\n")] = '\0';
    nim[strcspn(nim, "\n")] = '\0';
    kelas[strcspn(kelas, "\n")] = '\0';
    tempat_tanggal_lahir[strcspn(tempat_tanggal_lahir, "\n")] = '\0';
    alamat[strcspn(alamat, "\n")] = '\0';
    hobby[strcspn(hobby, "\n")] = '\0';
    no_hp[strcspn(no_hp, "\n")] = '\0';

    printf("\nOutput\n");
    printf("Nama : %s\n", nama);
    printf("NIM : %s\n", nim);
    printf("Kelas Paralel : %s\n", kelas);
    printf("Tempat/Tanggal Lahir : %s\n", tempat_tanggal_lahir);
    printf("Alamat : %s\n", alamat);
    printf("Hobby : %s\n", hobby);
    printf("No. HP : %s\n", no_hp);

    return 0;
}