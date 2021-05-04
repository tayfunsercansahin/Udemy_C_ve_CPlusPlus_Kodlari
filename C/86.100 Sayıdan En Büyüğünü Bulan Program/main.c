#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    int sayi;
    int buyukSayi;
    printf("Lütfen 10 tane sayý giriniz\n");

    for(int i=0;i<10;i++){
        scanf("%d",&sayi);

        if(i==0){
            buyukSayi=sayi;
        }
        if(buyukSayi<sayi){
            buyukSayi=sayi;
        }
    }
    printf("Girmiþ olduðunuz sayýlar arasýndaki en büyük olaný: %d\n",buyukSayi);

    return 0;
}
