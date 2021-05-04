#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int binarySearch(int dizi[], int enDusuk, int enYuksek, int arananDeger){
        while(enDusuk<=enYuksek){
            int ortadakiSayi=enDusuk+(enYuksek-enDusuk)/2;

            if(dizi[ortadakiSayi]==arananDeger){
                return ortadakiSayi;
            }

            if(dizi[ortadakiSayi]<arananDeger){
                enDusuk=ortadakiSayi+1;
            }
            else{
                enYuksek=ortadakiSayi-1;
            }
        }
        return -1;
}

int main(){
    setlocale(LC_ALL,"Turkish");

    int sayilar[]={2,5,7,14,24,36,67};
    int boyut=sizeof(sayilar)/sizeof(int);
    int aranilanSayi;

    while(1){
    printf("Indeksini öðrenmek istediðiniz sayýyý giriniz\n");
    scanf("%d",&aranilanSayi);

    int aramaSonucu=binarySearch(sayilar,0,boyut-1,aranilanSayi);

    if(aramaSonucu>=0){
        printf("Aradýðýnýz sayý %d.indekstedir\n",aramaSonucu);
    }
    else{
        printf("Aradýðýnýz sayý bulunamamaktadýr\n");
    }
    }
    return 0;
}
