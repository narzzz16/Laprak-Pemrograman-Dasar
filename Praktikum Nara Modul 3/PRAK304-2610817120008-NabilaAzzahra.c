#include <stdio.h>

int main() {
    int a, i;

    for (i = 0; i < 5; i++) {
        scanf("%d", &a);

        if (a >= 100) {
            printf("Anda Menginput Melebihi Limit Bilangan\n");
        } else if (a == 0) {
            printf("Nol\n");
        } else if (a < 10) {
            printf("Satuan\n");
        } else if (a < 20) {
            printf("Belasan\n");
        } else {
            printf("Puluhan\n");
        }

        printf("\n");
    }

    return 0;
}