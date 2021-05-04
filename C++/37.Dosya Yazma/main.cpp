#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    /*ofstream dosya("D:\\.TAYFUN\\C++\\(KAAN) C ve C++\\C++\\999.Dosyalar\\ogrencilerrrr.txt");

    dosya<<"Ogrencilerin bilgileri"<<endl;
    dosya<<"Kaan ";
    dosya<<"18401541";
    ----------------------------------------------*/
    /*ofstream dosya("D:\\.TAYFUN\\C++\\(KAAN) C ve C++\\C++\\999.Dosyalar\\ogrencilerrrr.txt");

    int okulNo[5];
    string isim[5];
    int sinif[5];

    int i;
    for(i=0;i<5;i++){
        cout<<i+1<<".ogrencinin bilgilerini giriniz: [Okul Numarasi/Adi/Sinifi] "<<endl;
        cin>>okulNo[i]>>isim[i]>>sinif[i];
    }

    int sayac=0;
    while(sayac<5){
    dosya<<okulNo[sayac]<<" "<<isim[sayac]<<" "<<sinif[sayac]<<endl;
    sayac++;
    }
    ---------------------------------------------*/
    ofstream dosya("D:\\.TAYFUN\\C++\\(KAAN) C ve C++\\C++\\999.Dosyalar\\ogrencilerrrrrrr.txt",ios_base::app);

    dosya<<"Ogrenci bilgileri"<<endl;

    return 0;
}
