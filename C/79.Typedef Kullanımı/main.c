#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct ogrenciler{  // typedef struct türünü belirtip birden fazla farklý yerde kullandýrmaya yarar
    int okulNo;
    char isim[15];
    char soyad[15];
    int sinif;
    char sube;
    double genelOrtalama;
}ogrenci;

int main()
{
    setlocale(LC_ALL,"Turkish");

    ogrenci ogrenci1;
    ogrenci ogrenci2;

    ogrenci1.okulNo=450;
    ogrenci2.okulNo=451;

    strcpy(ogrenci1.isim,"Fatih Kaan");
    strcpy(ogrenci2.isim,"Osman");

    printf("%s\n",ogrenci1.isim);
    printf("%s\n",ogrenci2.isim);

    return 0;
}
