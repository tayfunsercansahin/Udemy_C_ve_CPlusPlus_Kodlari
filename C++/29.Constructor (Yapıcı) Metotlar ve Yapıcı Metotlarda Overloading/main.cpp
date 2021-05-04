#include <iostream>

using namespace std;

class ogrenci{
private:
    string isim;
    int numara;

public:
    ogrenci(string yazilacakIsim,int yazilacakNumara){
        isim=yazilacakIsim;
        numara=yazilacakNumara;
    }

    void setIsim(string yazilacakIsim){
        isim=yazilacakIsim;
    }

    void setNumara(int yazilacakNumara){
        numara=yazilacakNumara;
    }

    void ogrenciBilgileriniGoster(){
        cout<<"Isim: "<<isim<<endl;
        cout<<"Numara: "<<numara<<endl;
    }
};


int main()
{
    ogrenci ogr1("Kaan Academy",18401324);

    ogr1.ogrenciBilgileriniGoster();

    return 0;
}
