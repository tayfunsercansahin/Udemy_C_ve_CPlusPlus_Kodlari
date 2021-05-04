#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int toplama(int sayi){
    if(sayi!=0){
        return sayi+toplama(sayi-1);
    }
    else{
        return sayi;
    }
}

int main(){
    setlocale(LC_ALL,"Turkish");

    int sayi;
    printf("Lütfen pozitif bir tam sayý giriniz\n");
    scanf("%d",&sayi);

    if(sayi>=0){
        printf("1-%d arasýndaki sayýlarýn toplamý = %d\n",sayi,toplama(sayi));
    }
    else{
        printf("Lütfen pozitif bir tam sayý giriniz\n");
    }
    return 0;
}
