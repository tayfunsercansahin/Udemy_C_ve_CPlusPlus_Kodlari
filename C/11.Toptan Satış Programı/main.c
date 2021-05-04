#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    int adet;
    float adetFiyati;
    printf("Kaç adet ürün alacaksınız? \a\n");
    scanf("%d",&adet);

    if(adet>=400){
        adetFiyati=0.75;
    }
    else if(adet>=300 && adet<400){
        adetFiyati=1.25;
    }
    else if(adet>=200 && adet<300){
        adetFiyati=2;
    }
    else if(adet>=100 && adet<200){
        adetFiyati=2.5;
    }
    else if(adet>0 && adet<100){
        adetFiyati=3;
    }
    else{
        printf("Lütfen 1 veya daha büyük adet seçiniz");
    }

    float toplamTutar=adet*adetFiyati;
    int toplamTutarYuvarlama=toplamTutar;
    printf("Toplam ödenecek tutar: %.2f TL\n",toplamTutar);
    float indirim=toplamTutar-toplamTutarYuvarlama;
    printf("Yapılan indirim: %.2f TL\n",indirim);
    printf("Ödenecek son tutar: %d TL\n",toplamTutarYuvarlama);

    return 0;
}
