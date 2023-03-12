/*
Nama Program  : CekBilSemp.c
Deskripsi     : Menghitung dan menampilkan di layar apakah inputan (N) adalah bilangan sempurna atau tidak
Nama Pembuat  : Surya Fajar
NIM           : 24060122140107
Tanggal       : Sabtu, 11 Maret 2023 20:49 WIB
*/
#include <stdio.h>

int main() {
    int N, sum=0;
    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    for(int i=1; i<N; i++) {
        if(N%i == 0) {
            sum += i;
        }
    }

    if(sum == N) {
        printf("%d adalah bilangan sempurna\n", N);
    } else {
        printf("%d bukan bilangan sempurna\n", N);
    }

    return 0;
}
