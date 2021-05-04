#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void takimlar(){
    printf("Galatasaray\n");
    printf("Fenerbah�e\n");
    printf("Be�ikta�\n");
    printf("Trabzonspor\n");
}

int sayininIkiKatiniAl(int sayi){
    printf("\n%d say�s�n�n 2 kat� = %d\n",sayi,sayi*2);
    return sayi*2;
}

float karekokunuAl(float sayi){
    printf("%.2f say�s�n�n karek�k� = %.2f\n",sayi,sqrt(sayi));
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
    printf("�lk karakter = %c\n",ilkHarfiniBas("Kaan"));
    printf("S�f�rdan b�y�kse 1, de�ilse 0 testi = %d\n",sifirdanBuyukMu(5));
    printf("S�f�rdan b�y�kse 1, de�ilse 0 testi = %d\n",sifirdanBuyukMu(-5));

    int sayi;
    printf("\nPozitif olup olmad���n� sorgulamak istedi�iniz say�y� girin\n");
    scanf("%d",&sayi);

    if(sifirdanBuyukMu(sayi)==1){
        printf("%d say�s� pozitiftir\n",sayi);
    }
    else{
        printf("%d say�s� pozitif de�ildir\n",sayi);
    }
    return 0;
}
