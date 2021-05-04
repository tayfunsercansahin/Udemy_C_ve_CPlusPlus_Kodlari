#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int basamakSayisiniBul(int sayi){
    int basamakSayisi=0;

    if(sayi>=0){
        do{
            basamakSayisi++;
            sayi=sayi/10;
        }while(sayi>0);
    }
    return basamakSayisi;
}

int tersineCevir(int sayi){
    int basamakSayimiz=basamakSayisiniBul(sayi);
    int dizi[basamakSayimiz];
    int basamakSayisi=0;

    do{
        basamakSayisi++;
        dizi[basamakSayisi-1]=sayi%10;
        sayi=sayi/10;
    }while(sayi>0);

    float sayininTersi=0;

    for(int i=0;i<basamakSayimiz;i++){
        sayininTersi=sayininTersi+dizi[i]*pow(10,basamakSayimiz-1-i);
    }
    return sayininTersi;
}

int main(){
    setlocale(LC_ALL,"Turkish");

    int sayi;
    printf("Lütfen tersini almak istediðiniz sayýyý giriniz\n");
    scanf("%d",&sayi);
    printf("%d",tersineCevir(sayi));
    return 0;
}
