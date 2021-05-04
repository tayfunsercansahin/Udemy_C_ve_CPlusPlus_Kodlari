#include <iostream>

using namespace std;

class calisan{
private:
    string isim="null";
    float maas;

public:
    string getIsim(){
        return isim;
    }

    string setIsim(string isim){
        this->isim=isim;
    }
};

int main()
{
    calisan c1;

    c1.setIsim("Kaan");
    cout<<c1.getIsim()<<endl;

    return 0;
}
