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

    printf("L�tfen de�i�tirmek istedi�iniz 2 adet say� giriniz\n");
    scanf("%d%d",&sayi1,&sayi2);

    printf("Say�1: %d , Say�2: %d\n",sayi1,sayi2);
    sayilariDegistir(&sayi1,&sayi2);
    printf("Yeni Say�1: %d , Yeni Say�2: %d\n",sayi1,sayi2);
    return 0;
}
