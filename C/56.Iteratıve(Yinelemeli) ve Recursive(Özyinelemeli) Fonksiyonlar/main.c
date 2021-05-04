#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int faktoriyel(int sayi){
    int sonuc=1;

    for(int i=1;i<=sayi;i++){
        sonuc=sonuc*(i);
    }
    return sonuc;
}

int faktoriyelRekursif(int sayi){
    if(sayi<=1){
        return 1;
    }
    else{
        return sayi*faktoriyelRekursif(sayi-1);
    }
}

int main(){
    setlocale(LC_ALL,"Turkish");

    int sayi;
    printf("Faktöriyelini hesaplamak istediðiniz sayýyý girin\n");
    scanf("%d",&sayi);

    printf("Normal: %d! = %d\n",sayi,faktoriyel(sayi));
    printf("Rekursif: %d! = %d\n",sayi,faktoriyelRekursif(sayi));
    return 0;
}
