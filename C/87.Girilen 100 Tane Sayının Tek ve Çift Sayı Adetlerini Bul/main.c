#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    int sayi;
    int tekSayiMiktari=0;
    int ciftSayiMiktari=0;

    printf("L�tfen 10 tane pozitif tam say� giriniz\n");

    for(int i=0;i<10;i++){
        scanf("%d",&sayi);
        if(sayi%2==0){
            ciftSayiMiktari++;
        }
        else{
            tekSayiMiktari++;
        }
    }
    printf("Kullan�c�n�n girdi�i tek say� miktar�: %d\n",tekSayiMiktari);
    printf("Kullan�c�n�n girdi�i �ift say� miktar�: %d\n",ciftSayiMiktari);
    return 0;
}
