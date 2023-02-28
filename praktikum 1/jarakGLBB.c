int main()
{
    //Kamus Lokal
    float vnol, t, a, s;

    //Algoritma
    printf("Masukkan Angka: \n");
    scanf("%f",&vnol);
    scanf("%f",&t);
    scanf("%f",&a);

    s = vnol*t+0.5*(a*t*t);
    printf("Jaraknya yaitu: %f\n",s);
    return 0;
}
