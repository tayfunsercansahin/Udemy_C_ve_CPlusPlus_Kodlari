#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");
    /*int sayi;
    printf("Lütfen bir sayý giriniz\n");
    scanf("%d",&sayi);

    int *sayininAdresi;
    sayininAdresi=&sayi;
    printf("Sayýnýn adresteki deðeri: %d \nSayýnýn adresi: %x\n",*sayininAdresi,sayininAdresi);
    printf("Sayý: %d \nSayýnýn Adresi: %x\n",sayi,&sayi);
    ---------------------------------------------------------------------------------------*/
    /*int sayi=12, *sayininAdresi;
    float kesirliSayi=5.7, *kesirliSayininAdresi;
    double buyukKesirliSayi=7.8, *buyukKesirliSayininAdresi;
    char karakter='K', *karakterinAdresi;

    printf("-----Sayýlarýn Deðerleri-----\n");
    printf("%d \n",sayi);
    printf("%f \n",kesirliSayi);
    printf("%lf \n",buyukKesirliSayi);
    printf("%c \n",karakter);

    sayininAdresi=&sayi;
    kesirliSayininAdresi=&kesirliSayi;
    buyukKesirliSayininAdresi=&buyukKesirliSayi;
    karakterinAdresi=&karakter;

    printf("-----Sayýlarýn Adresleri-----\n");
    printf("%x \n",sayininAdresi);
    printf("%x \n",kesirliSayininAdresi);
    printf("%x \n",buyukKesirliSayininAdresi);
    printf("%x \n",karakterinAdresi);
    --------------------------------------------------------------------------------------*/
    int sayilar[6]={1,2,3,4,5,6};
    int *sayilarDizisininAdresi;

    sayilarDizisininAdresi=&sayilar;

    printf("%d \n",*sayilarDizisininAdresi);
    printf("%d \n",*sayilarDizisininAdresi+1);
    printf("%d \n",*sayilarDizisininAdresi+2);
    printf("%d \n",*sayilarDizisininAdresi+3);
    printf("%d \n",*sayilarDizisininAdresi+4);
    printf("%d \n",*sayilarDizisininAdresi+5);
    return 0;
}
