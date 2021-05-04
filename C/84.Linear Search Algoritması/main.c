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
    printf("Dizideki indeksini merak etti�iniz say�y� giriniz\n");
    scanf("%d",&arananDeger);

    int aramaSonucu=linearSearch(sayilar,arananDeger,boyut);

    if(aramaSonucu>=0){
        printf("Arad���n�z say� %d.indekste bulunmaktad�r\n",aramaSonucu);
    }
    else{
        printf("Arad���n�z say� bulunamamaktad�r\n");
    }
    }
    return 0;
}
