#include <iostream>

using namespace std;

class insan{
public:
    string isim;
    int yas;

    void isimVeYasSoyle(){
        cout<<"Isim: "<<isim<<"\nYas: "<<yas<<endl;
    }
};

int main()
{
    insan insan1,insan2;

    insan1.isim="Kaan";
    insan1.yas=25;

    insan2.isim="Fatih";
    insan2.yas=35;

    insan1.isimVeYasSoyle();
    insan2.isimVeYasSoyle();

    return 0;
}
