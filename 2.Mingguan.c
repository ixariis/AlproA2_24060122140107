/*
Nama Program  : Mingguan.c
Deskripsi     : Menampilkan di layar hari-hari dalam satu minggu berdassarkan nomor dari 1 sampai 7
Nama Pembuat  : Surya Fajar
NIM           : 24060122140107
Tanggal       : Sabtu, 4 Maret 2023 20:49 WIB
*/

#include <stdio.h>

int main() {
    int NomorHari;

    printf("Masukkan nomor hari: ");
    scanf("%d", &NomorHari);

    if (NomorHari < 1 || NomorHari > 7) {
        printf("Masukan nomor hari tidak tepat\n");
    } else {
        switch (NomorHari) {
            case 1:
                printf("Minggu\n");
                break;
            case 2:
                printf("Senin\n");
                break;
            case 3:
                printf("Selasa\n");
                break;
            case 4:
                printf("Rabu\n");
                break;
            case 5:
                printf("Kamis\n");
                break;
            case 6:
                printf("Jumat\n");
                break;
            case 7:
                printf("Sabtu\n");
                break;
        }
    }

    return 0;
}