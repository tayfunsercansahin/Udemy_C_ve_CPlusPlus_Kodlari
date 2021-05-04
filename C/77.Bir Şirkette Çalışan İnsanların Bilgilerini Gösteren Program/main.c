#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct calisanlar{
    char ad[50];
    char soyad[50];
    char iseBaslangicTarihi[20];
    float maas;
    int primSayisi;
    char cinsiyet;
};

int main(){
    setlocale(LC_ALL,"Turkish");

    struct calisanlar calisan1;
    printf("Lütfen çalýþanýn bilgilerini giriniz\n");
    scanf("%s %s %s %f %d %c",calisan1.ad,calisan1.soyad,calisan1.iseBaslangicTarihi,&calisan1.maas,&calisan1.primSayisi,&calisan1.cinsiyet);

    printf("Çalýþan bilgileri:\n");
    printf("%s\n%s\n%s\n%f\n%d\n%c\n",calisan1.ad,calisan1.soyad,calisan1.iseBaslangicTarihi,calisan1.maas,calisan1.primSayisi,calisan1.cinsiyet);

    struct calisanlar *calisan1Adres=&calisan1;

    printf("Çalýþan bilgileri:\n");
    printf("%s\n%s\n%s\n%f\n%d\n%c\n",(*calisan1Adres).ad,(*calisan1Adres).soyad,(*calisan1Adres).iseBaslangicTarihi,(*calisan1Adres).maas,(*calisan1Adres).primSayisi,(*calisan1Adres).cinsiyet);
    return 0;
}
