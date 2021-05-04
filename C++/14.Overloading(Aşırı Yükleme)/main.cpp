#include <iostream>

using namespace std;

void isimSoyle(){
    cout<<"Kaan"<<endl;
}

void isimSoyle(string isim){
    cout<<isim<<endl;
}

void isimSoyle(string isim1, string isim2){
    cout<<isim1<<" "<<isim2<<endl;
}

int topla(int sayi1, int sayi2){
    return sayi1+sayi2;
}

double topla(double sayi1, double sayi2){
    return sayi1+sayi2;
}

string topla(string sayi1, string sayi2){
    return sayi1+sayi2;
}

int main()
{
    cout<<"Ayni fonksiyonun ilk hali"<<endl;
    isimSoyle();
    cout<<"Ayni fonksiyonun 2.hali"<<endl;
    isimSoyle("Academy");
    cout<<"Ayni fonksiyonun 3.hali"<<endl;
    isimSoyle("Bilgisayar", "Muhendisi");

    cout<<"########################"<<endl;

    cout<<topla(5,6)<<endl;
    cout<<topla(5.2,9.4)<<endl;
    cout<<topla("5,","6.2")<<endl;

    return 0;
}
