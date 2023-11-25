#include <stdio.h>

int main() {
    int A[11]; 
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35}; 
    int j = 0;

    for (int i = 0; i < 11; i++) {
        if (data[i] % 2 == 0) { 
            A[j] = data[i];
            j++;
        }
    }

    for (int i = 0; i < j; i++) {
        printf("%d ", A[i]); 
    }

    return 0;
}
