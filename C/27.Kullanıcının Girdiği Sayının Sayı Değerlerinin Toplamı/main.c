#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    int sayi, basamakSayisi=0, sayiDegerleriToplami=0;

    printf("L�tfen say� de�erlerinin toplam�n� ��renmek istedi�iniz pozitif say�y� giriniz\a\n");
    scanf("%d",&sayi);

    int orjinalSayi=sayi;

    if(sayi>0){
     do{
        sayiDegerleriToplami+=sayi%10;
        basamakSayisi++;

        sayi=sayi/10;
    }while(sayi>0);

    printf("%d say�s� %d basamakl�d�r ve say� de�erlerinin toplam� %d'dir\n",orjinalSayi,basamakSayisi,sayiDegerleriToplami);
    }
    else{
        printf("L�tfen pozitif bir say� giriniz");
    }
    return 0;
}
