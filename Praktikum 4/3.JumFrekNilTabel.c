/*
Nama Program  : JumFrekNilTabel.c
Deskripsi     : Menghitung dan menampilkan di layar umalah nilai elemen tabel T yang frekuensi kemunculannya lebih dari satu kali
Nama Pembuat  : Surya Fajar
NIM           : 24060122140107
Tanggal       : Sabtu, 18 Maret 2023 20:49 WIB
*/
#include <stdio.h>

int main() {
    int n;
    printf("Masukkan jumlah elemen pada tabel T: ");
    scanf("%d", &n);

    int T[n];
    printf("Masukkan elemen pada tabel T:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &T[i]);
    }

    int frekuensi = 0;
    int jumlah = 0;

    for (int i = 0; i < n; i++) {
        frekuensi = 0;
        for (int j = 0; j < n; j++) {
            if (T[j] == T[i]) {
                frekuensi++;
            }
        }
        if (frekuensi > 1) {
            jumlah += T[i];
        }
    }

    printf("Jumlah nilai-nilai elemen tabel T yang frekuensi kemunculannya lebih dari satu kali adalah: %d \n", jumlah);

    return 0;
}
