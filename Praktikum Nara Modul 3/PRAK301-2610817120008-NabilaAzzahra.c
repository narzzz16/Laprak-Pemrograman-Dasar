#include <stdio.h>

int main() {
    int a[3], b[3], i;

    for (i = 0; i < 3; i++) {
        scanf("%d %d", &a[i], &b[i]);
    }

    printf("\n");
    
    for (i = 0; i < 3; i++) {
        if (a[i] <= b[i]) {
            printf("%d %d\n", a[i], b[i]);
        } else {
            printf("%d %d\n", b[i], a[i]);
        }
    }

    return 0;
}