#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

 struct ogrenci{
        char ad[30];
        char soyad[30];
        char okul[30];
        char bolum[30];
        int okulNumarasi;
        int sinif;
 }ogr1;

int main(){
    setlocale(LC_ALL,"Turkish");

    strcpy(ogr1.ad,"Kaan");
    strcpy(ogr1.soyad,"Academy");
    strcpy(ogr1.okul,"Galatasaray Üniversitesi");
    strcpy(ogr1.bolum,"Bilgisayar Mühendisliði");
    ogr1.okulNumarasi=18401604;
    ogr1.sinif=1;

    printf("%s %s %s %s %d %d",ogr1.ad,ogr1.soyad,ogr1.okul,ogr1.bolum,ogr1.okulNumarasi,ogr1.sinif);
    return 0;
}
