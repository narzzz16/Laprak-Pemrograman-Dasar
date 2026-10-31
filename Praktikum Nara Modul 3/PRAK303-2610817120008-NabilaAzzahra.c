#include <stdio.h>

int main() {
    int n, i;

    for (i = 0; i < 3; i++) {
        scanf("%d", &n);

        if (n > 0) {
            printf("positif\n");
        } else if (n < 0) {
            printf("negatif\n");
        } else {
            printf("nol\n");
        }
        
        printf("\n");
    }

    return 0;
}