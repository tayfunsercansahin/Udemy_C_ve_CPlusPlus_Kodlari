#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    int sayi, basamakSayisi=0, sayiDegerleriToplami=0;

    printf("Lütfen sayý deðerlerinin toplamýný öðrenmek istediðiniz pozitif sayýyý giriniz\a\n");
    scanf("%d",&sayi);

    int orjinalSayi=sayi;

    if(sayi>0){
     do{
        sayiDegerleriToplami+=sayi%10;
        basamakSayisi++;

        sayi=sayi/10;
    }while(sayi>0);

    printf("%d sayýsý %d basamaklýdýr ve sayý deðerlerinin toplamý %d'dir\n",orjinalSayi,basamakSayisi,sayiDegerleriToplami);
    }
    else{
        printf("Lütfen pozitif bir sayý giriniz");
    }
    return 0;
}
