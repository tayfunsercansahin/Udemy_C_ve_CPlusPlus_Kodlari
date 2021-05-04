#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int girilenSayiAdeti;
    float sayilar[100], toplam=0, ortalama;

    printf("Kaç tane sayý ile iþlem yapmak istediðinizi giriniz\a\n");
    scanf("%d",&girilenSayiAdeti);

    while(girilenSayiAdeti>100 || girilenSayiAdeti<=0){
        printf("1-100 arasýnda bir deðer giriniz\n");
        printf("Tekrar kaç tane sayý ile iþlem yapmak istediðinizi giriniz\a\n");
        scanf("%d",&girilenSayiAdeti);
    }

    for(int i=0;i<girilenSayiAdeti;i++){
        printf("Lütfen %d.sayýyý giriniz\n",i+1);
        scanf("%f",&sayilar[i]);
        toplam+=sayilar[i];
    }

    ortalama=toplam/girilenSayiAdeti;

    printf("Girilen sayýlarýn toplamý= %.2f\n",toplam);
    printf("Girilen sayýlarýn ortalamasý= %.2f\n",ortalama);

    return 0;
}
