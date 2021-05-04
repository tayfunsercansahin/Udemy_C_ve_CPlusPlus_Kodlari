#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct kitap{
    char ad[50];
    char yazarIsmi[50];
    int basimYili;
    float fiyat;
}kitap1={"Dokuzuncu Hariciye Koðuþu","Peyami Safa",1980,23.5},
 kitap2={"Suç ve Ceza","Dostoyevski",1960,25.75};

 struct kitap2{
    char ad[50];
    char yazarIsmi[50];
    int basimYili;
    float fiyat;
}romanKitaplari[2]={{"Dokuzuncu Hariciye Koðuþu","Peyami Safa",1980,23.5},{"Suç ve Ceza","Dostoyevski",1960,25.75}};

 struct kitap3{
    char ad[50];
    char yazarIsmi[50];
    int basimYili;
    float fiyat;
 };

int main(){
    setlocale(LC_ALL,"Turkish");
    printf("Kitap1: %s / %s / %d / %.2f TL\n",kitap1.ad,kitap1.yazarIsmi,kitap1.basimYili,kitap1.fiyat);
    printf("Kitap2: %s / %s / %d / %.2f TL\n",kitap2.ad,kitap2.yazarIsmi,kitap2.basimYili,kitap2.fiyat);

    float toplamFiyat=kitap1.fiyat+kitap2.fiyat;
    printf("2 kitabýn toplam fiyatý: %.2f TL\n",toplamFiyat);
//----------------------------------------------------------------------------------
    int toplamFiyat2=0;

    for(int i=0;i<2;i++){
        toplamFiyat2=toplamFiyat2+romanKitaplari[i].fiyat;
    }
    printf("Diðer toplam fiyat: %.2f TL\n",toplamFiyat2);
//----------------------------------------------------------------------------------
    struct kitap3 kitap1;
    strcpy(kitap1.ad,"Vadideki Zambak");
    printf("3.structtaki kitap adý: %s\n",kitap1.ad);
//----------------------------------------------------------------------------------
    struct kitap kitaplar[2]={{"Dokuzuncu Hariciye Koðuþu","Peyami Safa",1980,23.5},{"Suç ve Ceza","Dostoyevski",1960,25.75}};

    return 0;
}
