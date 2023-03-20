#include <stdio.h>

#define ROW 3 // Jumlah baris pada tabel T
#define COL 4 // Jumlah kolom pada tabel T

int main() {
    int T[ROW][COL] = {{1, 2, 3, 4},
                       {5, 6, 7, 8},
                       {9, 10, 11, 12}};
    int row_sum, col_sum;

    // Menghitung penjumlahan pada setiap baris
    printf("Penjumlahan setiap baris pada tabel T:\n");
    for (int i = 0; i < ROW; i++) {
        row_sum = 0;
        for (int j = 0; j < COL; j++) {
            row_sum += T[i][j];
        }
        printf("Baris %d: %d\n", i + 1, row_sum);
    }

    // Menghitung penjumlahan pada setiap kolom
    printf("\nPenjumlahan setiap kolom pada tabel T:\n");
    for (int j = 0; j < COL; j++) {
        col_sum = 0;
        for (int i = 0; i < ROW; i++) {
            col_sum += T[i][j];
        }
        printf("Kolom %d: %d\n", j + 1, col_sum);
    }

    return 0;
}
