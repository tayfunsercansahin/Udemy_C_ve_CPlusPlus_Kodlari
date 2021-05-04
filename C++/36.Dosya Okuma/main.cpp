#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    /*ifstream dosya("D:\\.TAYFUN\\C++\\(KAAN) C ve C++\\C++\\999.Dosyalar\\ogrenciler.txt");

    int sayi;

    while(dosya>>sayi){
        cout<<sayi<<endl;
    }
    -----------------------------------------*/
    ifstream dosya("D:\\.TAYFUN\\C++\\(KAAN) C ve C++\\C++\\999.Dosyalar\\takimlar.txt");

    int kurulusTarihleri[4];
    string takimIsmi[4];
    string stadyumIsmi[4];

    int i=0;
    while(dosya){
        dosya>>kurulusTarihleri[i]>>takimIsmi[i]>>stadyumIsmi[i];
        i++;
    }

    for(i=0;i<3;i++){
        cout<<"Kurulus: "<<kurulusTarihleri[i]<<endl;
        cout<<"Takim: "<<takimIsmi[i]<<endl;
        cout<<"Stadyum: "<<stadyumIsmi[i]<<endl;
        cout<<endl;
    }

    return 0;
}
