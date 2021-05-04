#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void yildizBas(int *adet){
    for(int i=0;i<*adet;i++){
        printf("* ");
    }
}

int main(){
    setlocale(LC_ALL,"Turkish");
/*  int sayi1=5, sayi2=8;
    int *sayi1Adres, *sayi2Adres;

    sayi1Adres=&sayi1;
    sayi2Adres=&sayi2;

    printf("%d\n",*sayi1Adres);
    printf("%d\n",*sayi2Adres);
---------------------------------------------*//*
    int x, y=0;
    int *a1, *a2=&y;

    a1=a2;
    x=++(*a2);
    *a2=*a1+x;

    printf("%d %d %d %d\n",x,y,*a1,*a2);
----------------------------------------------*/
    int sayi;
    printf("Kaç adet * bastýrýlmasýný istiyorsunuz?\n");
    scanf("%d",&sayi);

    yildizBas(&sayi);

    return 0;
}
