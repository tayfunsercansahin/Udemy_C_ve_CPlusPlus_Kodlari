#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int asalMi(int sayi){
    for(int carpan=2;carpan<=sayi/2;carpan++){
        if(sayi%carpan==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    setlocale(LC_ALL,"Turkish");

    int sayac=0;

    for(int i=2;i<=1000;i++){
        if(asalMi(i)==1){
            printf("%d asald�r...\n",i);
            sayac++;
        }
    }
    printf("-----1 ile 1000 aras�nda %d tane asal say� vard�r-----",sayac);
    return 0;
}
