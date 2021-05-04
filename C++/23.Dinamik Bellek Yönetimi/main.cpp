#include <iostream>

using namespace std;

struct ogr{
    int numara;
    float ogrenciNot;
    char a;
    double deger2;
};

int main()
{
    /*int *adres=new int;

    *adres=10;
    cout<<"null'dan once"<<*adres<<endl;

    delete adres;
    adres=nullptr;
    cout<<"null'dan sonra "<<*adres<<endl;

    /**adres=12;
    cout<<*adres<<endl;
    ----------------------------------------*/
    int boyut=4;
    int *adres=new int[boyut];

    *adres=10;
    *(adres+1)=20;
    *(adres+2)=30;
    *(adres+3)=40;

    for(int i=0;i<4;i++){
        cout<<*(adres+i)<<endl;
    }

    delete [] adres;
    adres=nullptr;

    for(int i=0;i<4;i++){
        cout<<*(adres+i)<<endl;
    }

    return 0;
}
