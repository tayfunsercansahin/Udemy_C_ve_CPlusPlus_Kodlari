#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int faktoriyel(int sayi){
    if(sayi>0){
        return sayi*faktoriyel(sayi-1);
    }
    else{
        return 1;
    }
}

int main(){
    setlocale(LC_ALL,"Turkish");

    int sayi;
    printf("L�tfen fakt�riyelini ��renmek istedi�iniz bir tamsay� giriniz\n");
    scanf("%d",&sayi);

    if(sayi>=0){
        printf("%d! = %d",sayi,faktoriyel(sayi));
    }
    else{
        printf("L�tfen 0 veya daha b�y�k bir tam say� giriniz\n");
    }
    return 0;
}
