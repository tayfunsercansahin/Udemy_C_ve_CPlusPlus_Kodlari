#include <iostream>

using namespace std;

int main()
{
    float ucgenAci1, ucgenAci2, ucgenAci3;

    cout<<"Ucgenin ic acilarini girin: "<<endl;
    cin>>ucgenAci1>>ucgenAci2>>ucgenAci3;

    float acilarToplami;

    acilarToplami=ucgenAci1+ucgenAci2+ucgenAci3;

    if(acilarToplami==180){
        if(ucgenAci1==60 && ucgenAci2==60){
            cout<<"Eskenar ucgen"<<endl;
        }
        else if(ucgenAci1==ucgenAci2 || ucgenAci1==ucgenAci3 || ucgenAci2==ucgenAci3){
            cout<<"Ikizkenar ucgen"<<endl;
        }
        else{
            cout<<"Cesitkenar ucgen"<<endl;
        }
    }
    else{
        cout<<"Yanlis girdin, acilarin toplami 180 olmali"<<endl;
    }

    return 0;
}
