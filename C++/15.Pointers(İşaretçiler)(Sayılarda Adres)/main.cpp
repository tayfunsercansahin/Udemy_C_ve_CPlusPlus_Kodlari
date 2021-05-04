#include <iostream>

using namespace std;

void degerleriDegistir(int *x, int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int main()
{
    /*int sayi=10;

    int *sayininAdresi;
    sayininAdresi=&sayi;

    cout<<sayininAdresi<<endl;
    cout<<sayininAdresi+1<<endl;
    cout<<*sayininAdresi<<endl;
    ----------------------------------*/
    int sayi1, sayi2, temp;

    cout<<"2 adet sayi gir: "<<endl;
    cin>>sayi1>>sayi2;

    cout<<"1.sayi: "<<sayi1<<" 2.Sayi: "<<sayi2<<endl;

    degerleriDegistir(&sayi1,&sayi2);

    cout<<"1.sayi: "<<sayi1<<" 2.Sayi: "<<sayi2<<endl;


    return 0;
}
