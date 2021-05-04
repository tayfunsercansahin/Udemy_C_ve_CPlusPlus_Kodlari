#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define PI 3.14
#define enBuyukSayi(sayi1,sayi2) (sayi1>sayi2) ? sayi1:sayi2
#define enBuyukSayi2(sayi1,sayi2) (sayi1>sayi2) ? sayi1:sayi2
#define saatiSoyle(karakter) (karakter=='E' || karakter=='e') ? __TIME__:"Kullanýcý saati istemiyor"

int main(){
    setlocale(LC_ALL,"Turkish");

    printf("PI = %.2f\n",PI);

    printf("%d daha büyüktür\n",enBuyukSayi(5,7));
    printf("%d daha büyüktür\n",enBuyukSayi2(9,6));

    char kullaniciKarakter;
    printf("\nSaati öðrenmek ister misiniz? [E/e/H/h]\n");
    scanf("%c",&kullaniciKarakter);
    if(saatiSoyle(kullaniciKarakter)){
        printf("%s",saatiSoyle(kullaniciKarakter));
    }
    else{
        printf("%s",saatiSoyle(kullaniciKarakter));
    }
    return 0;
}
