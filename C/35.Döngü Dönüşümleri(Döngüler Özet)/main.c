#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");
/*---------------------------------------------------------------------
    int likesayi; float likeyuzde;

    for(int i=1;i<=5;i++){
        printf("%d.sanat��n�n be�enilme say�s�n� giriniz\a\n",i);
        scanf("%d",&likesayi);

        likeyuzde=(float)likesayi/100;

        printf("%d.sanat��n�n be�enilme y�zdesi: %.2f\n",i,likeyuzde);
    }
-----------------------------------------------------------------------*/
/*  int sayac=1, likesayi; float likeyuzde;

    while(sayac<=5){
        printf("%d.sanat��n�n be�enilme say�s�n� giriniz\a\n",sayac);
        scanf("%d",&likesayi);

        likeyuzde=(float)likesayi/100;

        printf("%d.sanat��n�n be�enilme y�zdesi: %0.2f\n",sayac,likeyuzde);
        sayac++;
    }
-----------------------------------------------------------------------*/
    int i=1, likesayi;  float likeyuzde;

    do{
        printf("%d.sanat��n�n be�enilme say�s�n� giriniz\a\n",i);
        scanf("%d",&likesayi);

        likeyuzde=(float)likesayi/100;

        printf("%d.sanat��n�n be�enilme y�zdesi: %0.2f\n",i,likeyuzde);
        i++;
    }while(i<=5);

    return 0;
}
