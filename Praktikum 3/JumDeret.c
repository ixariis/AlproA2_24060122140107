/*
Nama Program  : JumDeret.c
Deskripsi     : Menghitung dan menampilkan di layar jumlah deret dari input (N)
Nama Pembuat  : Surya Fajar
NIM           : 24060122140107
Tanggal       : Sabtu, 11 Maret 2023 20:49 WIB
*/






#include <stdio.h>

int main() {
    int N, sum=0;
    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    for(int i=1; i<=N; i++) {
        sum += i;
    }

    printf("Jumlah total deret bilangan adalah %d", sum);
    return 0;
}
