#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string dizi;
    int sayac=0, temp;

    cout<<"Bir kelime girin: "<<endl;
    cin>>dizi;

    /*sayac=dizi.length();

    int i=0, j=0;

    while(i<sayac-1){
        j=i+1;

        while(j<sayac){
            if(dizi[i]>dizi[j]){
                temp=dizi[i];
                dizi[i]=dizi[j];
                dizi[j]=temp;
            }
            j++;
        }
        i++;
    }

    cout<<dizi<<endl;
    -----------------------------------*/
    sort(dizi.begin(),dizi.end());

    cout<<dizi<<endl;

    return 0;
}
