#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct calisanBilgisi{
    char makam[20];
    char calistigiBirim[20];
    float maas;
    int calistigiSene;
};

struct calisanlar{
    char ad[50];
    char soyad[50];
    int yas;
    struct calisanBilgisi bilgi;
};

void elemanBilgileriniGoster(struct calisanlar x){
    printf("%s %s %d %s %s %.2f %d\n",x.ad,x.soyad,x.yas,x.bilgi.makam,x.bilgi.calistigiBirim,x.bilgi.maas,x.bilgi.calistigiSene);
}

int main(){
    setlocale(LC_ALL,"Turkish");
    /* strcpy(calisan1.ad,"Kaan");
        strcpy(calisan1.soyad,"Academy");
        calisan1.yas=25;

        strcpy(calisan1.bilgi.makam,"Ýþçi");
        strcpy(calisan1.bilgi.calistigiBirim,"Yazýlým");
        calisan1.bilgi.maas=3700.5;
        calisan1.bilgi.calistigiSene=3;
    }
    printf("%s %s %d %s %s %.2f %d\n",calisan1.ad,calisan1.soyad,calisan1.yas,calisan1.bilgi.makam,calisan1.bilgi.calistigiBirim,calisan1.bilgi.maas,calisan1.bilgi.calistigiSene);
------------------------------------------------------------------------------------------*/
    struct calisanlar calisanlarinTamami[3];

    for(int i=0;i<3;i++){
        printf("%d.elemanýn bilgilerini giriniz...\n",i+1);
        scanf("%s %s %d s %s %f %d",calisanlarinTamami[i].ad,calisanlarinTamami[i].soyad,&calisanlarinTamami[i].yas,calisanlarinTamami[i].bilgi.makam,calisanlarinTamami[i].bilgi.calistigiBirim,&calisanlarinTamami[i].bilgi.maas,&calisanlarinTamami[i].bilgi.calistigiSene);
    }

    printf("Kaydedilen eleman bilgileri...\n");

    for(int i=0;i<3;i++){
        elemanBilgileriniGoster(calisanlarinTamami[i]);
    }
    return 0;
}
