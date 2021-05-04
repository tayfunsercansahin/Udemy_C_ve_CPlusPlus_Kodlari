#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    int i,k;

    for(i=0;i<20;i+=2){
        printf("%d çift\n",i);
    }

    printf("\n");

    for(k=19;k>0;k-=2){
        printf("%d tek\n",k);
    }

    return 0;
}
