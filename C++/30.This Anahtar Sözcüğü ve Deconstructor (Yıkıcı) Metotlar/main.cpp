#include <iostream>

using namespace std;

class ogrenci{
private:
    string isim;
    int numara;

public:
    ogrenci(string isim,int numara){
        this->isim=isim;
        this->numara=numara;
    }

    ~ogrenci(){
        cout<<"Obje yok edildi"<<endl;
    }

    void ogrenciBilgileriniGoster(){
        cout<<"Isim: "<<isim<<endl;
        cout<<"Numara: "<<numara<<endl;
    }
};

int main()
{
    ogrenci *ogr1=new ogrenci("Kaan Academy",32432);

    ogr1->ogrenciBilgileriniGoster();

    delete ogr1;

    return 0;
}
