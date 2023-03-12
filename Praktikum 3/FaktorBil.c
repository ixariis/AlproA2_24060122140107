/*
Nama Program  : FaktorBil.c
Deskripsi     : Menghitung dan menampilkan di layar banyaknya faktor dari inputan (N)
Nama Pembuat  : Surya Fajar
NIM           : 24060122140107
Tanggal       : Sabtu, 11 Maret 2023 20:49 WIB
*/

#include <stdio.h>

int main() {
    int N;
    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    printf("Faktor dari %d adalah: ", N);
    for(int i=1; i<=N; i++) {
        if(N%i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}





