#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 100

void bubbleSort(int dizi[], int boyut){
    for(int i=0;i<boyut;i++){
        for(int j=1;j<boyut-i;j++){
            if(dizi[j-1]>dizi[j]){
                int temp=dizi[j];
                dizi[j]=dizi[j-1];
                dizi[j-1]=temp;
            }
        }
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

    bubbleSort(tamSayiDizisi,boyut);

    for(int i=0;i<boyut;i++){
        printf("%d ",tamSayiDizisi[i]);
    }
    return 0;
}
