/*
Nama Program  : CekBilPrima.c
Deskripsi     : Menghitung dan menampilkan di layar apakah inputan (N) adalah bilangan prima atau tidak
Nama Pembuat  : Surya Fajar
NIM           : 24060122140107
Tanggal       : Sabtu, 11 Maret 2023 20:49 WIB
*/

#include <stdio.h>

int main() {
    int N, count=0;
    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    for(int i=1; i<=N; i++) {
        if(N%i == 0) {
            count++;
        }
    }

    if(count == 2) {
        printf("%d adalah bilangan prima\n", N);
    } else {
        printf("%d bukan bilangan prima\n", N);
    }

    return 0;

}
