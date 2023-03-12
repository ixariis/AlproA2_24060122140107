/*
Nama Program  : BilPrimaN.c
Deskripsi     : Menghitung dan menampilkan di layar bilangan prima yang tersedia sampai inputan (N)
Nama Pembuat  : Surya Fajar
NIM           : 24060122140107
Tanggal       : Sabtu, 11 Maret 2023 20:49 WIB
*/
#include <stdio.h>

int main() {
    int N;
    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    for(int i=2; i<=N; i++) {
        int count = 0;
        for(int j=1; j<=i; j++) {
            if(i%j == 0) {
                count++;
            }
        }
        if(count == 2) {
            printf("%d ", i);
        }
    }

    return 0;
}
