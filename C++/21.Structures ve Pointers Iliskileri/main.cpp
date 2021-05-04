#include <iostream>

using namespace std;

struct ogrenci{
    int numara;
    string isim;
};

void ismiDegistir(ogrenci *ismiDegistirilecekOgrenci,string koyulacakIsim){
    ismiDegistirilecekOgrenci->isim = koyulacakIsim;
}

void ogrenciOlustur(ogrenci *yeniOgrenci,int numara,string isim){
    yeniOgrenci->numara = numara;
    yeniOgrenci->isim = isim;
}

void ogrenciyiSoyle(ogrenci ogr){
    cout<<"Ogrenci bilgileri: "<<ogr.isim<<" "<<ogr.numara<<endl;
}

void ogrenciyiSil(ogrenci *ogr){
    ogr->isim=" ";
    ogr->numara=0;
}

int main()
{
    /*ogrenci ogr1;

    ogr1.isim="Kaan";
    cout<<ogr1.isim<<endl;

    ismiDegistir(&ogr1,"Fatih");
    cout<<ogr1.isim<<endl;
    -----------------------------*/
    ogrenci ogr2;
    ogrenciOlustur(&ogr2,18405201,"Kaan Academy");
    ogrenciyiSoyle(ogr2);

    ogrenciyiSil(&ogr2);
    ogrenciyiSoyle(ogr2);

    return 0;
}
