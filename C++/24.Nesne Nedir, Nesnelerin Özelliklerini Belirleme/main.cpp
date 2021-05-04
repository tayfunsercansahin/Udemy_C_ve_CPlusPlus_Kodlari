#include <iostream>

using namespace std;

class insan{
    public:
    string isim;
    string gozRengi;
};

int main()
{
    insan tayfun;
    insan ahmet;

    tayfun.isim="Tayfun";
    tayfun.gozRengi="Ela";

    ahmet.isim="Ahmet";
    ahmet.gozRengi="Mavi";

    cout<<"Tayfun: "<<tayfun.isim<<" "<<tayfun.gozRengi<<endl;
    cout<<"Ahmet: "<<ahmet.isim<<" "<<ahmet.gozRengi<<endl;

    return 0;
}
