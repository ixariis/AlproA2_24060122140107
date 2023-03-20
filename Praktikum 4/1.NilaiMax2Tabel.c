#include <stdio.h>

int main() {
    int T[] = {5, 7, 1, 10, 4, 9}; // contoh tabel T

    int max1 = -1;
    int max2 = -1;

    for (int i = 0; i < sizeof(T)/sizeof(int); i++) {
        if (T[i] > max1) {
            max2 = max1;
            max1 = T[i];
        } else if (T[i] > max2 && T[i] != max1) {
            max2 = T[i];
        }
    }

    printf("Nilai maksimum ke-2 dari tabel T adalah: %d\n", max2);

    return 0;
}
