#include <iostream>

using namespace std;

class altin{
public:
    int ayar;
    int miktar;

    void neKadarKullanildim(){
        cout<<miktar<<endl;
    }
};

class demir{
public:
    int miktar;

    void neKadarKullanildim(){
        cout<<miktar<<endl;
    }
};

class motor:public altin,public demir{
public:
    int devirSayisi;
    int kullanilanAltin;
    int kullanilanDemir;
};

int main()
{
    motor m1;

    m1.devirSayisi=1600;
    m1.kullanilanAltin=5;
    m1.kullanilanDemir=1500;

    m1.altin::miktar=m1.kullanilanAltin;
    m1.demir::miktar=m1.kullanilanDemir;

    m1.altin::neKadarKullanildim();
    m1.demir::neKadarKullanildim();

    return 0;
}
