#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define PI 3.14
#define enBuyukSayi(sayi1,sayi2) (sayi1>sayi2) ? sayi1:sayi2
#define enBuyukSayi2(sayi1,sayi2) (sayi1>sayi2) ? sayi1:sayi2
#define saatiSoyle(karakter) (karakter=='E' || karakter=='e') ? __TIME__:"Kullan�c� saati istemiyor"

int main(){
    setlocale(LC_ALL,"Turkish");

    printf("PI = %.2f\n",PI);

    printf("%d daha b�y�kt�r\n",enBuyukSayi(5,7));
    printf("%d daha b�y�kt�r\n",enBuyukSayi2(9,6));

    char kullaniciKarakter;
    printf("\nSaati ��renmek ister misiniz? [E/e/H/h]\n");
    scanf("%c",&kullaniciKarakter);
    if(saatiSoyle(kullaniciKarakter)){
        printf("%s",saatiSoyle(kullaniciKarakter));
    }
    else{
        printf("%s",saatiSoyle(kullaniciKarakter));
    }
    return 0;
}
