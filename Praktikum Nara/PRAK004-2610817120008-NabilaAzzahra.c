#include <stdio.h>

int main() {
    //PROGRAM IDENTITAS MAHASISWA
    char Nama[] = "Nabila Azzahra";
    char NIM[] = "2610817120008";
    for (int i = 0; i < 6; i++) {
        if (i == 0 || i == 5) {
            printf("################################\n");
        }
        else if (i == 2) {
            printf("#        %s        #\n", Nama);
        }
        else if (i == 3) {
            printf("#         %s        #\n", NIM);
        }
        else {
            printf("#                              #\n");
        }
    }
    return 0;
}