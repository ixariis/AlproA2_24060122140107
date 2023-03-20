#include <stdio.h>
#include <stdlib.h>

int main() {
    int simetri = 1;
    int i;
    int n1;
    int o1;

    int n;
    printf("Masukkan ukuran tabel T1: ");
    scanf("%d", &n1);

    int o;
    printf("Masukkan ukuran tabel T2: ");
    scanf("%d", &o1);

    int T1[n], T2[o];
    printf("Masukkan elemen pada tabel T1:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &T1[n]);
    }
    printf("Masukkan elemen pada tabel T2:\n");
    for (int i = 0; i < o; i++) {
        scanf("%d", &T2[o]);
    }

     if(n != o) {
        simetri = 0;
    }
    else {
        for(i=0; i<n; i++) {
            if(T1[n] != T2[o]){
                simetri = 0;
                break;
            }
        }
    if(simetri) {
        printf("T1 dan T2 simetri\n");
    }
    else {
        printf("T1 dan T2 tidak simetri\n");
    }

    return 0;
    }
}
