/*
Nama Program  : Bilangan.c
Deskripsi     : Menghitung dan menampilkan di layar apakah inputan (i) adalah bilangan bulat positif, bilangan nol atau bilangan negatif
Nama Pembuat  : Surya Fajar
NIM           : 24060122140107
Tanggal       : Sabtu, 4 Maret 2023 20:49 WIB
*/
#include <stdio.h>
int main() {


    int i;
    

    printf("Masukkan Nilai Ingeter :");
    scanf("%d", &i)

    
    if (i>=1){
        printf("Positif");
    }
    else if(i<=-1){
        printf("Negatif");
    }else if(i==0){
        printf("Nol");
    }
    else{printf("Bukan Bilangan");
    }

return 0;

}