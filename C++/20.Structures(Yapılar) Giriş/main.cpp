#include <iostream>

using namespace std;

struct ogrenci{
    int numara;
    string isim;
    string soyisim;
    string bolum;
    char cinsiyet;
};

int main()
{
    ogrenci ogr1={18401603,"Kaan","Academy","Bilgisayar Muh",'E'};
    ogrenci ogr2={18402605,"Burcu","Esen","Elektrik Elektronik Muh",'K'};
    ogrenci ogr3;

    cout<<"3.Ogrencinin bilgilerini giriniz: "<<endl;
    cin>>ogr3.numara>>ogr3.isim>>ogr3.soyisim>>ogr3.bolum>>ogr3.cinsiyet;

    cout<<"Numara: "<<ogr1.numara<<endl;
    cout<<"Isim: "<<ogr1.isim<<endl;
    cout<<"Soyisim: "<<ogr1.soyisim<<endl;
    cout<<"Bolum: "<<ogr1.bolum<<endl;
    cout<<"Cinsiyet: "<<ogr1.cinsiyet<<endl;

    cout<<endl;

    cout<<"Numara: "<<ogr2.numara<<endl;
    cout<<"Isim: "<<ogr2.isim<<endl;
    cout<<"Soyisim: "<<ogr2.soyisim<<endl;
    cout<<"Bolum: "<<ogr2.bolum<<endl;
    cout<<"Cinsiyet: "<<ogr2.cinsiyet<<endl;

    cout<<endl;

    cout<<"Numara: "<<ogr3.numara<<endl;
    cout<<"Isim: "<<ogr3.isim<<endl;
    cout<<"Soyisim: "<<ogr3.soyisim<<endl;
    cout<<"Bolum: "<<ogr3.bolum<<endl;
    cout<<"Cinsiyet: "<<ogr3.cinsiyet<<endl;

    return 0;
}
