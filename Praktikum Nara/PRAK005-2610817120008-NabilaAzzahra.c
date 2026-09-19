#include <stdio.h>

int main() {
    //PROGRAM HURUF PERTAMA DAN TERAKHIR NAMA
    for (int i = 0; i < 7; i++) {
        if (i == 0) {
            printf("#         #          ###\n");
        }
        else if (i == 1) {
            printf("##        #         #   #\n");
        }
        else if (i == 2) {
            printf("# #       #        #     #\n");
        }
        else if (i == 3) {
            printf("#  #      #       #########\n");
        }
        else if (i == 4) {
            printf("#   #     #      #         #\n");
        }
        else if (i == 5) {
            printf("#    #    #     #           #\n");
        }
        else {
            printf("#     #   #    #             #\n");
            }
    }
    return 0;
}