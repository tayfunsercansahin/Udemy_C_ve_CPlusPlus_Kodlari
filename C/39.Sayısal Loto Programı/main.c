#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    int rastgeleSayi;
    srand(time(NULL));
    int loto[49]={0};

    for(int i=0;i<6;i++){
        rastgeleSayi=1+rand()%49;

        while(loto[rastgeleSayi-1]==1){
            rastgeleSayi=1+rand()%49;
        }

        loto[rastgeleSayi-1]=1;
        printf("%d ",rastgeleSayi);
    }

    return 0;
}
