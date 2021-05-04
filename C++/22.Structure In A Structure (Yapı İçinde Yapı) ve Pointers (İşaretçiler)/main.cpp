#include <iostream>

using namespace std;

struct kategori{
    string isim;
    int urunAdeti;
};

struct reyonlar{
    string isim;
    bool acikMi;
    int urunSayisi;

    kategori *kategoriOzellikleri;
};

int main()
{
    /*reyonlar r1={"Kuru Gida",1,200,{"Makarna",130}};
    reyonlar r2;

    r2.isim="Kuru Gida";
    r2.acikMi=true;
    r2.urunSayisi=200;
    r2.kategoriOzellikleri.isim="Makarna";
    r2.kategoriOzellikleri.urunAdeti=130;

    cout<<r1.isim<<" "<<r1.acikMi<<" "<<r1.urunSayisi<<endl;
    cout<<r1.kategoriOzellikleri.isim<<" "<<r1.kategoriOzellikleri.urunAdeti<<endl;

    cout<<r2.isim<<" "<<r2.acikMi<<" "<<r2.urunSayisi<<endl;
    cout<<r2.kategoriOzellikleri.isim<<" "<<r2.kategoriOzellikleri.urunAdeti<<endl;

    stoktanDusur(&r1,30);
    cout<<r1.isim<<" "<<r1.acikMi<<" "<<r1.urunSayisi<<endl;
    -------------------------------------------------------*/
    reyonlar r1;
    reyonlar r2;

    r2.isim="Kasap";
    r2.acikMi=true;
    r2.urunSayisi=300;

    kategori a={"Tavuk",150};

    r2.kategoriOzellikleri=&a;
    cout<<"r1: "<<r1.isim<<endl;
    cout<<r1.isim<<endl;
    r1=r2;
    cout<<"r1: "<<r1.isim<<endl;
    cout<<"r2: "<<r2.kategoriOzellikleri->isim<<" "<<r2.kategoriOzellikleri->urunAdeti<<endl;

    return 0;
}
