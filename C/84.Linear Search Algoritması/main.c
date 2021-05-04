#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int linearSearch(int dizi[], int arananSayi, int diziBoyut){
    for(int i=0;i<diziBoyut;i++){
        if(dizi[i]==arananSayi){
            return i;
        }
    }
    return -1;
}

int main(){
    setlocale(LC_ALL,"Turkish");

    int sayilar[]={3,5,1,-4,9,12,-1};
    int arananDeger;

    int boyut=sizeof(sayilar)/sizeof(int);

    while(1){
    printf("Dizideki indeksini merak ettiðiniz sayýyý giriniz\n");
    scanf("%d",&arananDeger);

    int aramaSonucu=linearSearch(sayilar,arananDeger,boyut);

    if(aramaSonucu>=0){
        printf("Aradýðýnýz sayý %d.indekste bulunmaktadýr\n",aramaSonucu);
    }
    else{
        printf("Aradýðýnýz sayý bulunamamaktadýr\n");
    }
    }
    return 0;
}
