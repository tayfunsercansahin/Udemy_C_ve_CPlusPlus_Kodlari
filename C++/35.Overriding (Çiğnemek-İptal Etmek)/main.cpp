#include <iostream>

using namespace std;

class kitap{
public:
    string isim;

    void bilgileriSoyle(){
        cout<<isim<<endl;
    }
};

class roman:public kitap{
public:
    string romanTipi; //kisa, orta, uzun

    roman(string isim,string romanTipi){
        this->isim=isim;
        this->romanTipi=romanTipi;
    }

    void bilgileriSoyle(){
        cout<<"Roman ismi: "<<isim<<" Roman tipi: "<<romanTipi<<endl;
    }
};

int main()
{
    roman r1("Dokuzuncu Hariciye Kogusu","Uzun");
    r1.bilgileriSoyle();

    kitap *r1Ebeveyn;
    r1Ebeveyn=&r1;
    r1Ebeveyn->bilgileriSoyle();

    return 0;
}
