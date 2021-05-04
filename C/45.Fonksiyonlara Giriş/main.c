#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void takimlar(){
    printf("Galatasaray\n");
    printf("Fenerbahçe\n");
    printf("Beþiktaþ\n");
    printf("Trabzonspor\n");
}

int sayininIkiKatiniAl(int sayi){
    printf("\n%d sayýsýnýn 2 katý = %d\n",sayi,sayi*2);
    return sayi*2;
}

float karekokunuAl(float sayi){
    printf("%.2f sayýsýnýn karekökü = %.2f\n",sayi,sqrt(sayi));
    return sqrt(sayi);
}

double karesiniAl(double sayi){
    return sayi*sayi;
}

char ilkHarfiniBas(char dizi[]){
    return dizi[0];
}

void altSatiraGec(){
    printf("\n");
}

int sifirdanBuyukMu(int sayi){
    if(sayi>0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    setlocale(LC_ALL,"Turkish");

    takimlar();
    sayininIkiKatiniAl(33);
    karekokunuAl(33);

    printf("Karesi = %lf\n",karesiniAl(10.1));
    altSatiraGec();
    printf("Ýlk karakter = %c\n",ilkHarfiniBas("Kaan"));
    printf("Sýfýrdan büyükse 1, deðilse 0 testi = %d\n",sifirdanBuyukMu(5));
    printf("Sýfýrdan büyükse 1, deðilse 0 testi = %d\n",sifirdanBuyukMu(-5));

    int sayi;
    printf("\nPozitif olup olmadýðýný sorgulamak istediðiniz sayýyý girin\n");
    scanf("%d",&sayi);

    if(sifirdanBuyukMu(sayi)==1){
        printf("%d sayýsý pozitiftir\n",sayi);
    }
    else{
        printf("%d sayýsý pozitif deðildir\n",sayi);
    }
    return 0;
}
