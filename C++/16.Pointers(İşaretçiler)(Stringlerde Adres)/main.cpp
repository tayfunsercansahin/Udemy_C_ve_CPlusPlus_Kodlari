#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    /*char isim[10]="Kaan";
    char *isimAdres=isim;

    for(int i=0;i<strlen(isim);i++){
        cout<<*(isimAdres+i)<<endl;;
    }
    ------------------------------------------
    string isim="Kaan";
    string *isimAdresi=&isim;

    cout<<isimAdresi<<endl;
    cout<<*isimAdresi<<endl;
    ------------------------------------------*/
    string takimlar[]={"Galatasaray","Fenerbahce","Besiktas","Trabzonspor"};
    string *takimlarAdresi=&takimlar[0];

    cout<<takimlarAdresi<<endl;

    for(int i=0;i<4;i++){
        cout<<*(takimlarAdresi+i)<<endl;
    }

    return 0;
}
