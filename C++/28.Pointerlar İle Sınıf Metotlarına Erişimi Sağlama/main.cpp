#include <iostream>

using namespace std;

class ogrenci{
private:
    string isim;
    int numara;

public:
    void setIsim(string yazilacakIsim){
        isim=yazilacakIsim;
    }

    void setNumara(int yazilacakNumara){
        numara=yazilacakNumara;
    }

    string getIsim(){
        return isim;
    }

    int getNumara(){
        return numara;
    }
};

int main()
{
    ogrenci *ogr1=new ogrenci();

    ogr1->setIsim("Kaan");
    ogr1->setNumara(18401487);

    cout<<ogr1->getIsim()<<" "<<ogr1->getNumara()<<endl;

    return 0;
}
