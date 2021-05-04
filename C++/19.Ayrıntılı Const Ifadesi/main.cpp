#include <iostream>

using namespace std;

void araligiBastir(const int *x, const int *y){
    for( ;x!=y;x++){
        cout<<*x<<endl;
    }
}

int topla(const int x, const int y){
    return x+y;
}

void diziyiYazdir(const string *dizininAdresi){
    const string *geciciDizi=dizininAdresi;

    for( ;dizininAdresi!=(geciciDizi+3);dizininAdresi++){
        cout<<*dizininAdresi<<endl;
    }
}

int main()
{
    /*int sayilar[]={1,2,3,4,5,6};

    araligiBastir(sayilar+1,sayilar+4);

    cout<<topla(5,6)<<endl;
    -----------------------------------*/
    string dizi[]={"Kaan","Academy","Basarinin","Adresi"};

    diziyiYazdir(dizi);

    return 0;
}
