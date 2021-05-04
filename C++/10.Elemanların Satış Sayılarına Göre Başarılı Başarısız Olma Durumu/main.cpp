#include <iostream>

using namespace std;

int main()
{
    string isim1, isim2, isim3;
    string soyisim1, soyisim2, soyisim3;
    int tcno1, tcno2, tcno3;
    int urunSayisi1, urunSayisi2, urunSayisi3;
    bool cinsiyet1, cinsiyet2, cinsiyet3;  // true=kadýn , false=erkek olsun

    cout<<"Calisan elemanlarin bilgilerini giriniz: (isim,soyisim,tcno,cinsiyet) "<<endl;
    cin>>isim1>>soyisim1>>tcno1>>cinsiyet1;
    cin>>isim2>>soyisim2>>tcno2>>cinsiyet2;
    cin>>isim3>>soyisim3>>tcno3>>cinsiyet3;

    urunSayisi1=50;
    urunSayisi2=50;
    urunSayisi3=50;

    urunSayisi1-=20;
    urunSayisi2-=15;
    urunSayisi3-=30;

    if(urunSayisi1>25){
        cout<<isim1<<" basarisiz"<<endl;
    }
    else{
        cout<<isim1<<" basarili"<<endl;
    }

    if(urunSayisi2>25){
        cout<<isim2<<" basarisiz"<<endl;
    }
    else{
        cout<<isim2<<" basarili"<<endl;
    }

    if(urunSayisi3>25){
        cout<<isim3<<" basarisiz"<<endl;
    }
    else{
        cout<<isim3<<" basarili"<<endl;
    }

    cout<<"Calisan1: "<<isim1<<" "<<soyisim1<<" "<<tcno1<<" "<<cinsiyet1<<endl;;
    cout<<"Calisan2: "<<isim2<<" "<<soyisim2<<" "<<tcno2<<" "<<cinsiyet2<<endl;;
    cout<<"Calisan3: "<<isim3<<" "<<soyisim3<<" "<<tcno3<<" "<<cinsiyet3<<endl;;

    return 0;
}
