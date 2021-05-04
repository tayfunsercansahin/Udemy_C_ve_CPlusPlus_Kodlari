#include <iostream>

using namespace std;

//template<class donusTipi>
template<class isminTipi,class soyadinTipi>

//donusTipi toplama(donusTipi sayi1,donusTipi sayi2){
//    return sayi1+sayi2;
//}

isminTipi bilgileriSoyle(isminTipi isim,soyadinTipi soyad){
    return isim+" "+soyad;
}

int main()
{
    //cout<<"int: "<<toplama<int>(10,25)<<endl;
    //cout<<"double: "<<toplama<double>(10.5,25.6)<<endl;

    cout<<"string: "<<bilgileriSoyle<string,string>("Kaan","Academy")<<endl;

    return 0;
}
