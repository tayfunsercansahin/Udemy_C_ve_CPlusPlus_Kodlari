#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float topla(float *x, float *y){
    return *x+*y;
}

float cikar(float *a, float *b){
    return *a-*b;
}

float carp(float *m, float *n){
    return *m*(*n);
}

float bolme(float *g, float *h){
    return *g/(*h);
}

int main(){
    setlocale(LC_ALL,"Turkish");

    float sayi1, sayi2;
    printf("Lütfen 2 adet sayý giriniz\n");
    scanf("%f%f",&sayi1,&sayi2);

    printf("Toplama: %f\n",topla(&sayi1,&sayi2));
    printf("Çýkarma: %f\n",cikar(&sayi1,&sayi2));
    printf("Çarpma: %f\n",carp(&sayi1,&sayi2));
    printf("Bölme: %f\n",bolme(&sayi1,&sayi2));
    return 0;
}
