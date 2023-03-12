/*
Nama Program  : BilSempN.c
Deskripsi     : Menghitung dan menampilkan di layar bilangan sempurna yang tersedia sampai inputan (N)
Nama Pembuat  : Surya Fajar
NIM           : 24060122140107
Tanggal       : Sabtu, 11 Maret 2023 20:49 WIB
*/
#include <stdio.h>

int main() {
    int N;
    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    for(int i=1; i<=N; i++) {
        int sum = 0;
        for(int j=1; j<i; j++) {
            if(i%j == 0) {
                sum += j;
            }
        }
        if(sum == i) {
            printf("%d ", i);
        }
    }

    return 0;
}
