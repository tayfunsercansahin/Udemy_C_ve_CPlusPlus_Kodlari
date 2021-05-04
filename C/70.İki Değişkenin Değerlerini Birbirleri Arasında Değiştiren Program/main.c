#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void sayilariDegistir(int *sayi1, int *sayi2){
    int temp=*sayi1;
    *sayi1=*sayi2;
    *sayi2=temp;
}

int main(){
    setlocale(LC_ALL,"Turkish");

    int sayi1, sayi2;

    printf("Lütfen deðiþtirmek istediðiniz 2 adet sayý giriniz\n");
    scanf("%d%d",&sayi1,&sayi2);

    printf("Sayý1: %d , Sayý2: %d\n",sayi1,sayi2);
    sayilariDegistir(&sayi1,&sayi2);
    printf("Yeni Sayý1: %d , Yeni Sayý2: %d\n",sayi1,sayi2);
    return 0;
}
