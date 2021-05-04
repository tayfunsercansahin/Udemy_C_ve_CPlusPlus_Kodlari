#include <iostream>

using namespace std;

int main(){
    float sayi;

    cout<<"Bir sayi girin: "<<endl;
    cin>>sayi;

    if(sayi>0){
        cout<<"Sayi pozitif, sayi: "<<sayi<<endl;
    }
    else if(sayi<0){
        cout<<"Sayi negatif, sayi: "<<sayi<<endl;
    }
    else{
        cout<<"Sayi sifirdir, sayi: "<<sayi<<endl;
    }

    return 0;
}
