#include <iostream>

using namespace std;

int toplama(int sayi1, int sayi2){
    return sayi1+sayi2;
}

int yasHesapla(int dogumTarihi){
    return 2021-dogumTarihi;
}

int main()
{
    int x=5;
    int y=6;

    /*toplama(x,y);

    while(true){
            cout<<"Iki sayi giriniz: "<<endl;
            cin>>x>>y;

            cout<<x<<"+"<<y<<"="<<toplama(x,y)<<endl;
    }
    --------------------------------------------------*/
    int dogumYili;

    cout<<"Dogum yilini gir: "<<endl;
    cin>>dogumYili;

    cout<<"Yasiniz: "<<yasHesapla(dogumYili)<<endl;;

    return 0;
}
