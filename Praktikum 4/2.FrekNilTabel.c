/*
Nama Program  : FrekNilTabel.c
Deskripsi     : Menghitung dan menampilkan di layar nilai elemen tabel T yang frekuensi kemunculannya lebih dari satu kali
Nama Pembuat  : Surya Fajar
NIM           : 24060122140107
Tanggal       : Sabtu, 18 Maret 2023 20:49 WIB
*/
#include <stdio.h>

int main() {
    int T[] = {1, 7, 9, 9, 4, 8, 3, 2, 5}; // contoh tabel T
    int n = sizeof(T)/sizeof(int);

    int frekuensi = 0;
    int adaElemen = 0;

    for (int i = 0; i < n; i++) {
        frekuensi = 0;
        for (int j = 0; j < n; j++) {
            if (T[j] == T[i]) {
                frekuensi++;
            }
        }
        if (frekuensi > 1) {
            adaElemen = 1;
            printf("%d ", T[i]);
        }
    }

    if (!adaElemen) {
        printf("Tidak ada elemen dengan frekuensi kemunculan lebih dari satu kali.");
    }

    return 0;
}
