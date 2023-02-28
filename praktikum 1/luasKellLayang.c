int main()
{
    //Kamus
    float s1, s2, d1, d2, Luas, Kell;

    //Algoritma
    printf("Masukkan nilai s1 : ");
    scanf("%f", &s1);

    printf("Masukkan nilai s2 : ");
    scanf("%f", &s2);

    printf("Masukkan nilai d1 : ");
    scanf("%f", &d1);

    printf("Masukkan nilai d2 : ");
    scanf("%f", &d2);

    Luas = 0.5 * d1 * d2;
    Kell = 2 * (s1 + s2);

    printf("Luas layang-layang adalah :  %.2f \n", Luas);
    printf("Keliling layang-layang adalah :  %.2f", Kell);

    return 0;
}
