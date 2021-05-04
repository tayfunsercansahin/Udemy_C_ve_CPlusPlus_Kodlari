#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    int i;

    for(i=0;i<10;i++){
        if(i%2==0){
        printf("%d\n",i);
        continue;
        }

        printf("XXXXX %d\n",i);
    }

    return 0;
}
