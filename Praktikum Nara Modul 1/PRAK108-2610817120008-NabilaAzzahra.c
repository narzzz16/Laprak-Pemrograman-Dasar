#include <stdio.h>
#include <math.h>

int main() {
    int putaran = 5;
    float jarak = 14;
    float keliling, jari_jari;

    keliling = jarak / putaran;
    jari_jari = keliling / (2 * M_PI);

    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n", jarak);

    printf("\nJawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", jari_jari);

    return 0;
}