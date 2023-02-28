int main()
{
    //Kamus Lokal
    float v0, t, y;
    const float g = 9.8;

    //Algoritma
    printf("masukkan nilai v0 = ");
    scanf("%f", &v0);

    printf("masukkan nilai t = ");
    scanf("%f", &t);

    y = v0 * t - (g*t*t)/2;

    printf("Jarak yang ditempuh benda yaitu :  %.2f", y);

    return 0;
}
