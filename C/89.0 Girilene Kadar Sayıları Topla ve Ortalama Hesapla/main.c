#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    int sayi;
    float toplam=0;
    int sayac=0;

    do{
        printf("L�tfen bir tam say� giriniz. ��lemi bitirmek i�in 0 tu�una bas�n�z\n");
        scanf("%d",&sayi);
        if(sayi!=0){sayac++;}
        toplam+=sayi;
    }while(sayi!=0);

    if(sayac==0){
        sayac++; //belirsizlik
    }

    printf("Girilen say�lar�n toplam de�eri: %f\n",toplam);
    printf("Girilen say�lar�n ortalamas�: %f\n",toplam/sayac);
    return 0;
}
