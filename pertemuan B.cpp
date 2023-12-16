#include <stdio.h>

int main() {
    int A[5] = {12, 8, 17, 5, 15};
    int B[7] = {5, 11, 7, 25, 9, 12, 14};
    int C[12];

    for (int i = 0; i < 12; i++) {
        C[i] = 0;
    }

    int indexC = 0;
    for (int i = 0; i < 5; i++) {
        if (A[i] > 10) {
            C[indexC] = A[i];
            indexC++;
        }
    }

    // Menyalin nilai yang lebih besar dari 10 dari Array B ke Array C (dari kanan ke kiri)
    indexC = 11;
    for (int i = 6; i >= 0; i--) {
        if (B[i] > 10) {
            C[indexC] = B[i];
            indexC--;
        }
    }

    // Menampilkan isi Array C
    printf("C=[");
    for (int i = 0; i < 12; i++) {
        if (C[i] != 0) {
            printf("%d", C[i]);
        } else {
            printf(" ");
        }

        if (i < 11) {
            printf(" , ");
        }
    }
    printf("]\n");

    return 0;
}

