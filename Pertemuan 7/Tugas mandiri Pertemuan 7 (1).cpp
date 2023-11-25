#include <stdio.h>

int main() {

    int nilai[10];

    printf("Masukkan nilai mahasiswa:\n");
    for (int i = 0; i < 10; i++) {
        printf("Nilai mahasiswa ke-%d: ", i + 1);
        scanf("%d", &nilai[i]);
    }

  
    printf("\nDaftar nilai mahasiswa yang lulus:\n");
    for (int i = 0; i < 10; i++) {
        if (nilai[i] >= 60) {
            printf("Mahasiswa ke-%d: %d\n", i + 1, nilai[i]);
        }
    }

    return 0;
}

