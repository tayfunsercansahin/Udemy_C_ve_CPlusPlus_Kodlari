#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int mukemmelSayiMi(int sayi){
    int toplam=1;

    for(int carpan=2;carpan<=sayi/2;carpan++){
        if(sayi%carpan==0){
            toplam+=carpan;
        }
    }

    if(toplam==sayi){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    setlocale(LC_ALL,"Turkish");

    for(int i=2;i<=10000;i++){
        if(mukemmelSayiMi(i)==1){
            printf("%d mükemmel sayýdýr...\n",i);
        }
    }
    return 0;
}
