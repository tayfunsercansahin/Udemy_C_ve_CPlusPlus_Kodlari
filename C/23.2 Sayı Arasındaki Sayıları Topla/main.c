#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    int sayi1,sayi2, toplam=0;

    printf("Ka�la ka� aras�ndaki say�lar� toplamak istersiniz? 2 say� giriniz\a\n");
    scanf("%d%d",&sayi1,&sayi2);
    printf("\n");

    int terimSayisi=abs(sayi1-sayi2)+1; //abs mutlak de�er
    int buyuk,kucuk;

    if(sayi2>sayi1){
        buyuk=sayi2;
        kucuk=sayi1;
        while(terimSayisi>0){
            printf("%d\n",sayi1);
            toplam+=sayi1;
            sayi1++;
            terimSayisi--;
        }
    }
    else if(sayi1>=sayi2){
        buyuk=sayi1;
        kucuk=sayi2;
        while(terimSayisi>0){
            printf("%d\n",sayi2);
            toplam+=sayi2;
            sayi2++;
            terimSayisi--;
        }
    }

    printf("%d'den %d'ye kadar olan say�lar�n toplam�: %d",kucuk,buyuk,toplam);
    return 0;
}
