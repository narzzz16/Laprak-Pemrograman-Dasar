#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    int alas = 5;
    int tinggi = 12;

    int sisi_a = tinggi;
    int sisi_b = sqrt((sisi_a * sisi_a) + (alas * alas));
    int sisi_c = alas;

    int keliling = sisi_a + sisi_b + sisi_c;
    int luas = (alas * tinggi) / 2;

    printf("Diketahui :\n");
    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n\n", tinggi);

    printf("Jawab :\n");
    printf("Sisi A = %d cm\n", sisi_a);
    printf("Sisi B = %d cm\n", sisi_b);
    printf("Sisi C = %d cm\n", sisi_c);
    printf("Keliling = %d cm\n", keliling);

    printf("Luas = %d cm", luas);

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD written;
    wchar_t pangkat_dua = L'\u00B2';

    WriteConsoleW(hConsole, &pangkat_dua, 1, &written, NULL);
    WriteConsoleW(hConsole, L"\n", 1, &written, NULL);

    return 0;
}