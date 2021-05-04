#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    float sayi1,sayi2,sayi3,toplam,carpim,ortalama,buyuk,kucuk;

    printf("Lütfen 3 farklý tamsayý giriniz:\a\n");
    scanf("%f%f%f",&sayi1,&sayi2,&sayi3);

    toplam=sayi1+sayi2+sayi3;
    carpim=sayi1*sayi2*sayi3;
    ortalama=toplam/3;
    printf("Toplam: %.2f , Çarpým: %.2f , Ortalama: %.2f\n",toplam,carpim,ortalama);

    kucuk=sayi1;

    if(sayi2<kucuk){
        kucuk=sayi2;
    }
    if(sayi3<kucuk){
        kucuk=sayi3;
    }

    buyuk=sayi1;

    if(sayi2>buyuk){
        buyuk=sayi2;
    }
    if(sayi3>buyuk){
        buyuk=sayi3;
    }

    printf("En küçük deðer: %.2f , en büyük deðer: %.2f\n",kucuk,buyuk);

    return 0;
}
