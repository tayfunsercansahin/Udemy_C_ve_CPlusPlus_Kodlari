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
    printf("Lütfen faktöriyelini öðrenmek istediðiniz bir tamsayý giriniz\n");
    scanf("%d",&sayi);

    if(sayi>=0){
        printf("%d! = %d",sayi,faktoriyel(sayi));
    }
    else{
        printf("Lütfen 0 veya daha büyük bir tam sayý giriniz\n");
    }
    return 0;
}
