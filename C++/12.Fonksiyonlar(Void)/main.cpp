#include <iostream>

using namespace std;

void dizininElemanlariniBastir(int sayiDizisi[],int boyut){
    for(int i=0;i<boyut;i++){
        cout<<sayiDizisi[i]<<" ";
    }
}

void kisAylariniSoyle(){   // void : boþ döndürmek
    cout<<"Aralik ocak subat"<<endl;
}

int main()
{
    int sayilar[3]={2,4,6};
    int sayilar2[4]={1,3,5,10};
    int sayilar3[5]={3,5,7,9,11};

    dizininElemanlariniBastir(sayilar,3);
    cout<<endl;
    dizininElemanlariniBastir(sayilar2,4);
    cout<<endl;
    dizininElemanlariniBastir(sayilar3,5);
    cout<<endl;

    kisAylariniSoyle();

    return 0;
}
