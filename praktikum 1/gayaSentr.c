



int main()
{
    //Kamus Lokal
    float m,v,r,F;

    //Algoritma
    printf("Program Gaya Sentripetal \n");
    printf("masukkan nilai m: ");
    scanf("%f", &m);
    printf("masukkan nilai v:");
    scanf("%f", &v);
    printf("masukkan nilai r: ");
    scanf("%f", &r);

    F = m *(v*v/r);
    printf("maka gaya sentripetal adalah :  %.2f", F);
return 0;
}
