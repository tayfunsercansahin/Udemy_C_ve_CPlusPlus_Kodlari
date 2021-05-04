#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    int sayi;
    float toplam=0;
    int sayac=0;

    do{
        printf("Lütfen bir tam sayý giriniz. Ýþlemi bitirmek için 0 tuþuna basýnýz\n");
        scanf("%d",&sayi);
        if(sayi!=0){sayac++;}
        toplam+=sayi;
    }while(sayi!=0);

    if(sayac==0){
        sayac++; //belirsizlik
    }

    printf("Girilen sayýlarýn toplam deðeri: %f\n",toplam);
    printf("Girilen sayýlarýn ortalamasý: %f\n",toplam/sayac);
    return 0;
}
