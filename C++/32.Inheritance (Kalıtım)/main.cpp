#include <iostream>

using namespace std;

class takim{
public:
    string isim;
    int kurulusYili;
};

class futbolcu:public takim{
private:
    string isim="Bir isim belirtilmedi";

public:
    int dogumYili;
    float maas;

    string getIsim(){
        return isim;
    }

    void setIsim(string isim){
        this->isim=isim;
    }
};

int main()
{
    futbolcu f1;
    takim *f1takim;
    f1takim=&f1;

    f1.setIsim("Kaan");
    cout<<f1.getIsim()<<endl;

    f1.dogumYili=1976;
    f1.maas=12312;
    cout<<"Dogum yili: "<<f1.dogumYili<<" Maas: "<<f1.maas<<endl;

    f1takim->isim="Galatasaray";
    cout<<"Takimi: "<<f1takim->isim<<endl;

    return 0;
}
