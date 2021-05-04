#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int tekCiftKontrol(int sayi){
    if(sayi%2==0){
        return 0;
    }else{
        return 1;
    }
}

int main(){
    setlocale(LC_ALL,"Turkish");

    /*int sayi;
    printf("Tek mi çift mi kontrol etmek istediðiniz sayýyý giriniz\n");
    scanf("%d",&sayi);

    if(tekCiftKontrol(sayi)==1){
        printf("Sayi tektir");
    }else{
        printf("Sayi çifttir");
    }
    ------------------------------------------------------------------*/
    for(int i=0;i<201;i++){
        if(tekCiftKontrol(i)==1){
            printf("%d = Tek\n",i);
        }else{
            printf("%d = Çift\n",i);
        }
    }
    return 0;
}
