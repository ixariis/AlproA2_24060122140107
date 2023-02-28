


int main ()
{
    //kamus
    float r, Vb, Vk;
    const float PHI = 3.1415;

    //algoritma
    printf("program volume bola kerucut \n");
    printf("masukkan nilai r:");
    scanf("%f", &r);

    Vb = (4/3) * (PHI *r *r * r);
    printf("volume bola adalah : %.2f\n", Vb);

    Vk = (Vb/2);
    printf("volume kerucut adalah : %.2f", Vk);
return 0;
}
