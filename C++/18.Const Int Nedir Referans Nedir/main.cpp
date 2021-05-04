#include <iostream>

using namespace std;

void sayilariDegistir(int &x, int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}

int main()
{
    /*const int sayi=25; // const: deðiþtirilemez deðer, sadece okuyabiliriz

    cout<<sayi<<endl;
    ----------------------*/
    /*int sayi=55;

    int &referans=sayi;

    referans++;

    cout<<sayi<<endl;
    ------------------------*/
    int sayi1=55;
    int sayi2=65;

    cout<<sayi1<<" "<<sayi2<<endl;

    sayilariDegistir(sayi1,sayi2);

    cout<<sayi1<<" "<<sayi2<<endl;

    return 0;
}
