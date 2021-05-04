#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    int sayi;
    int tekSayiMiktari=0;
    int ciftSayiMiktari=0;

    printf("Lütfen 10 tane pozitif tam sayý giriniz\n");

    for(int i=0;i<10;i++){
        scanf("%d",&sayi);
        if(sayi%2==0){
            ciftSayiMiktari++;
        }
        else{
            tekSayiMiktari++;
        }
    }
    printf("Kullanýcýnýn girdiði tek sayý miktarý: %d\n",tekSayiMiktari);
    printf("Kullanýcýnýn girdiði çift sayý miktarý: %d\n",ciftSayiMiktari);
    return 0;
}
