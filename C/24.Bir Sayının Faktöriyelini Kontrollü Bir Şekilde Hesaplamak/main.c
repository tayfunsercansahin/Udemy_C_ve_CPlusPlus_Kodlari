#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    int sayi, faktoriyelSonuc=1;

    printf("Faktöriyelini hesaplamak istediðiniz sayýyý girin\a\n");
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
        printf("Lütfen sýfýr veya sýfýrdan büyük bir sayý giriniz");
    }

    return 0;
    }
