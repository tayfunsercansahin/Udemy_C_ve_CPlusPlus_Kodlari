#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int girilenSayiAdeti;
    float sayilar[100], toplam=0, ortalama;

    printf("Ka� tane say� ile i�lem yapmak istedi�inizi giriniz\a\n");
    scanf("%d",&girilenSayiAdeti);

    while(girilenSayiAdeti>100 || girilenSayiAdeti<=0){
        printf("1-100 aras�nda bir de�er giriniz\n");
        printf("Tekrar ka� tane say� ile i�lem yapmak istedi�inizi giriniz\a\n");
        scanf("%d",&girilenSayiAdeti);
    }

    for(int i=0;i<girilenSayiAdeti;i++){
        printf("L�tfen %d.say�y� giriniz\n",i+1);
        scanf("%f",&sayilar[i]);
        toplam+=sayilar[i];
    }

    ortalama=toplam/girilenSayiAdeti;

    printf("Girilen say�lar�n toplam�= %.2f\n",toplam);
    printf("Girilen say�lar�n ortalamas�= %.2f\n",ortalama);

    return 0;
}
