#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    int i=1;

    while(i<11){
        printf("1x%d = %d\n",i,1*i);
        printf("2x%d = %d\n",i,2*i);
        printf("3x%d = %d\n",i,3*i);
        printf("4x%d = %d\n",i,4*i);
        printf("5x%d = %d\n",i,5*i);
        printf("6x%d = %d\n",i,6*i);
        printf("7x%d = %d\n",i,7*i);
        printf("8x%d = %d\n",i,8*i);
        printf("9x%d = %d\n",i,9*i);
        printf("10x%d = %d\n\n",i,10*i);

        i++;
    }

    return 0;
}
