#include <iostream>

using namespace std;

int main()
{
    /*if(true){
        cout<<"oldu"<<endl;
    }

    cout<<(5>7)<<endl; // false
    ---------------------------------------------------*/
    string email;
    string parola;
    string kontrolEmail="admin@admin.com";
    string kontrolParola="admin";

    cout<<"Email ve parolani gir: "<<endl;
    cin>>email>>parola;

    if(kontrolEmail==email && kontrolParola==parola){
        cout<<"Basarili giris yaptin"<<endl;
    }
    else if(kontrolEmail==email || kontrolParola==parola){
          if(kontrolEmail!=email){
            cout<<"Emaili yanlis girdin"<<endl;
            cout<<"Parola dogru"<<endl;
          }
          else{
            cout<<"Parolayi yanlis girdin"<<endl;
            cout<<"Email dogru"<<endl;
          }
    }
    else{
        cout<<"Butun bilgileri yanlis girdin"<<endl;
    }

    return 0;
}
