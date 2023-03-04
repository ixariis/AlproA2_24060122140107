/*
Nama Program  : Segitiga.c
Deskripsi     : Menghitung dan menampilkan di layar sisi-sisi segitiga
Nama Pembuat  : Surya Fajar
NIM           : 24060122140107
Tanggal       : Sabtu, 4 Maret 2023 20:49 WIB
*/
#include <stdio.h>

int main() {


    //Kamus
    int sisia;
    int sisib;
    int sisic;

    //Algoritma
    printf("Masukkan Sisi A: \n");
    scanf("%d",&sisia);
    printf("Masukkan Sisi B: \n");
    scanf("%d",&sisib);
    printf("Masukkan Sisi C: \n");
    scanf("%d",&sisic);

    if(sisia>0 && sisib>0 && sisic>0){
        if((sisia == sisib) && (sisib == sisic)){
            printf("Segitiga Sama Sisi");
        }else if(sisia == sisib || sisib == sisic || sisia == sisic){
            printf("Segitiga Sama Kaki");
        }else{
            printf("Segitiga Sembarang");  
        }
    }else{
        printf("Bukan Segitiga");
    }



}