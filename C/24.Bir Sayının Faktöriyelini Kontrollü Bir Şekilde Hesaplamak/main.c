#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    int sayi, faktoriyelSonuc=1;

    printf("Fakt�riyelini hesaplamak istedi�iniz say�y� girin\a\n");
    scanf("%d",&sayi);

    int kullanicininGirdigiSayi=sayi;

    if(sayi>=0){
    while(sayi>0){
        if(sayi==0){
            faktoriyelSonuc=1;
        }
        else{
            faktoriyelSonuc*=sayi;
        }
        sayi--;
    }

    printf("%d!=%d\n",kullanicininGirdigiSayi,faktoriyelSonuc);
    }
    else{
        printf("L�tfen s�f�r veya s�f�rdan b�y�k bir say� giriniz");
    }

    return 0;
    }
