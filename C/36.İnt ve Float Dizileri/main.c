#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    /*int sayilar[]={3,6,9,12,15};

    for(int i=0;i<5;i++){
        printf("Say�lar isimli dizinin %d.eleman� = %d\n",i+1,sayilar[i]);
    }
    ----------------------------------------------------------------------------*/
    /*float sayilar[]={1.5,2.7,3.8,123.9};

    for(int i=0;i<4;i++){
        printf("%.1f\n",sayilar[i]);
    }
    ----------------------------------------------------------------------------*/
    float sayilar[7]={};

    for(int i=0;i<7;i++){
        printf("%d.eleman� giriniz\a\n",i+1);
        scanf("%f",&sayilar[i]);
    }

    for(int i=0;i<7;i++){
        printf("%.2f  ",sayilar[i]);
    }

    return 0;
}
