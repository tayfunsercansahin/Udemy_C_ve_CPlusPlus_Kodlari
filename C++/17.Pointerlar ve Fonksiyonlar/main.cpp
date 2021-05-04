#include <iostream>

using namespace std;

void dizidekiElemanlariGoruntule(int *diziAdres,int boyut){
    for(int i=0;i<boyut;i++){
        cout<<diziAdres[i]<<endl;
    }
}

void keyfeGoreArttir(int *diziAdres,int boyut,int miktar){
    for(int i=0;i<boyut;i++){
        diziAdres[i]=diziAdres[i]+miktar;
    }
}

void keyfeGoreAzalt(int *diziAdres,int boyut,int miktar){
    for(int i=0;i<boyut;i++){
        diziAdres[i]=diziAdres[i]-miktar;
    }
}

int diziElemanlariniTopla(int *diziAdres,int boyut){
    int toplam=0;

    for(int i=0;i<boyut;i++){
        toplam=toplam+diziAdres[i];
    }

    return toplam;
}

int maximum(int *diziAdres,int boyut){
    int buyuk=diziAdres[0];

    for(int i=0;i<boyut;i++){
        if(buyuk<diziAdres[i]){
            buyuk=diziAdres[i];
        }
    }

    return buyuk;
}

int main()
{
    int sayilar[]={5,10,15,20};

    dizidekiElemanlariGoruntule(sayilar,4);

    keyfeGoreArttir(sayilar,4,3);
    cout<<endl;
    dizidekiElemanlariGoruntule(sayilar,4);

    keyfeGoreAzalt(sayilar,4,5);
    cout<<endl;
    dizidekiElemanlariGoruntule(sayilar,4);

    cout<<endl;
    cout<<"Dizi elemanlari toplami: "<<diziElemanlariniTopla(sayilar,4)<<endl;

    cout<<endl;
    cout<<"En buyuk sayi: "<<maximum(sayilar,4)<<endl;

    return 0;
}
