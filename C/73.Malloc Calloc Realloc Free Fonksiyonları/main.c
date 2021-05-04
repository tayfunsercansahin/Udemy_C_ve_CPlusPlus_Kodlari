#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");
    /* malloc: hafýzada yer ayýrýr, ramdeki sayýlarý korur
    calloc: hafýzada yer ayýrýr, ramdeki sayýlarý temizler
    realloc: alan daraltma
    */
    int *alan1=malloc(10*sizeof(int));
    int *alan2=calloc(10,sizeof(int));

    alan1[1]=100;
    alan1[2]=120;

    for(int i=0;i<10;i++){
        printf("alan1[%d]=%d , alan2[%d]=%d\n",i,alan1[i],i,alan2[i]);
    }

    alan1=realloc(alan1,5*sizeof(int));

    return 0;
}
