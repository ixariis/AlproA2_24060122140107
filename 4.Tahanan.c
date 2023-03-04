/*
Nama Program  : Tahanan.c
Deskripsi     : Menghitung dan menampilkan di layar jumlah tahanan
Nama Pembuat  : Surya Fajar
NIM           : 24060122140107
Tanggal       : Sabtu, 4 Maret 2023 20:49 WIB
*/
#include <stdio.h>

int main(void) {
   int tahanan1;
   int tahanan2;
   int tahanan3;
   int total;

   printf("Masukkan nilai tahanan 1: ");
   scanf("%d", &tahanan1);

   printf("Masukkan nilai tahanan 2: ");
   scanf("%d", &tahanan2);

   printf("Masukkan nilai tahanan 3: ");
   scanf("%d", &tahanan3);

   if (tahanan1 <= 0 || tahanan2 <= 0 || tahanan3 <= 0) {
      printf("Masukan tahanan tidak boleh negatif.");
      return 0;
   }

   total = tahanan1 + tahanan2 + tahanan3;

   printf("Total tahanan seri adalah: %d", total);

   return 0;
}

