#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 100

void selectionSort(int dizi[], int boyut){
    int enKucukIndex;

    for(int i=0;i<boyut;i++){
        enKucukIndex=i;
        for(int j=i;j<boyut;j++){
            if(dizi[j]<dizi[enKucukIndex]){
                enKucukIndex=j;
            }
        }
        int temp=dizi[i];
        dizi[i]=dizi[enKucukIndex];
        dizi[enKucukIndex]=temp;
    }
}

int main(){
    setlocale(LC_ALL,"Turkish");

    int tamSayiDizisi[MAX], boyut;
    printf("Kaç elemanlý dizi oluþturmak istiyorsunuz?\n");
    scanf("%d",&boyut);

    for(int i=0;i<boyut;i++){
        printf("%d.elemaný giriniz\n",i+1);
        scanf("%d",&tamSayiDizisi[i]);
    }

    for(int i=0;i<boyut;i++){
        printf("%d ",tamSayiDizisi[i]);
    }
    printf("\n");

    selectionSort(tamSayiDizisi,boyut);

    for(int i=0;i<boyut;i++){
        printf("%d ",tamSayiDizisi[i]);
    }
    return 0;
}
