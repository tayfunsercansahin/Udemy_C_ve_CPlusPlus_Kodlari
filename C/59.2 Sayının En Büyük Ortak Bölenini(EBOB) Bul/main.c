#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int ebob(int sayi1,int sayi2){
    if(sayi2!=0){
        return ebob(sayi2,sayi1%sayi2);
    }
    else{
        return sayi1;
    }
}

int main(){
    setlocale(LC_ALL,"Turkish");

    int sayi1, sayi2;
    printf("EBOB'unu ��renmek istedi�iniz 2 say�y� giriniz\n");
    scanf("%d%d",&sayi1,&sayi2);

    printf("EBOB(%d,%d) = %d\n",sayi1,sayi2,ebob(sayi1,sayi2));
    return 0;
}
