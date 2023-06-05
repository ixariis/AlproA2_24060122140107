/*Nama File 	: kelompokNilai.c*/
/*Deskripsi 	: Mengelompokkan tipe pokemon berdasarkan 2 kriteria nilai power*/
/*Pembuat   	: 24060122140107 --- Surya Fajar */
/*Tgl Pembuatan	: 4 Juni 2023*/

/*header file*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{ // tipe bentukan pokemon yang berisi nama dan nilai power
    char nama[255][255];
    int nilai;
}pokemon;

/*Program Utama*/
int main(void)
{
    /*Kamus Lokal*/
    pokemon PKM;
    int retval;

    FILE *myFILE, *aFile, *bFile, *cFile, *Fail;

    myFILE = fopen("nama_power.txt", "r");
    aFile = fopen("Kelas S.txt","w");
    bFile = fopen("Kelas A.txt","w");

    /*Algoritma*/
    if(!myFILE){
        printf("File tidak ditemukan!"); // apabila file kandidat.txt tidak ditemukan maka akan memunculkan pesan ini
    } else {
        fprintf(aFile, "Pokemon dengan peringkat S\nKarena di data tidak ada pokemon yang lebih dari 800 maka data kriteria S diubah menjadi >600\n");
        fprintf(bFile, "Pokemon dengan peringkat A\nPokemon yang powernya kurang dari 600\n");
        retval = fscanf(myFILE, "%s %d", &PKM.nama,&PKM.nilai);
        while (retval != EOF)
        {
            if(PKM.nilai >= 600){ // Proses pengelompokan nilai berdasarkan kriteria
                fprintf(aFile, "%s %d\n", PKM.nama,PKM.nilai);
            } else {
                fprintf(bFile, "%s %d\n", PKM.nama,PKM.nilai);
            }
            retval = fscanf(myFILE, "%s %d", &PKM.nama,&PKM.nilai);
        }
        printf("Nilai berhasil dikelompokkan");
        fclose(myFILE);
    }
    return 0;
}
