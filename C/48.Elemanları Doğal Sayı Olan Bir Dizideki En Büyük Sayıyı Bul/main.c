#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define PI 3.14
#define yazdir printf
void enBuyukSayi(int dizi[],int boyut){
    int enBuyukDeger=0;

    for(int i=0;i<boyut;i++){
        if(dizi[i]>enBuyukDeger){
            enBuyukDeger=dizi[i];
        }
    }
    printf("Dizinin en büyük deðeri = %d\n",enBuyukDeger);
}

int main(){
    setlocale(LC_ALL,"Turkish");

    int dizi[]={2,4,8,6,7};
    int boyut=sizeof(dizi)/sizeof(dizi[0]);

    enBuyukSayi(dizi,boyut);
    printf("(printf)Dizinin boyutu = %d\n",boyut);
    yazdir("(yazdir)Dizinin boyutu = %d\n",boyut);

    return 0;
}
