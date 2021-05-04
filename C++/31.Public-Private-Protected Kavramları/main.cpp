#include <iostream>

using namespace std;

class A{
public:
    int x;

};

class B{
protected:
    int y;

};

class C{
private:
    int z;

public:
    void setZ(int deger){
    z=deger;
    }

    void getZ(){
    cout<<"Private z: "<<z<<endl;
    }

};

class D:public A,public B,public C{
public:
    D(){
    y=5;
    }

public:
    void getY(){
        cout<<"Protected y: "<<y<<endl;
    }

};

int main()
{
    D d1;

    d1.x=10;
    cout<<"Public x: "<<d1.x<<endl;

    d1.getY();

    d1.setZ(100);
    d1.getZ();

    return 0;
}
