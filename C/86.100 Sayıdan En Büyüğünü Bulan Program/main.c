#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    int sayi;
    int buyukSayi;
    printf("L�tfen 10 tane say� giriniz\n");

    for(int i=0;i<10;i++){
        scanf("%d",&sayi);

        if(i==0){
            buyukSayi=sayi;
        }
        if(buyukSayi<sayi){
            buyukSayi=sayi;
        }
    }
    printf("Girmi� oldu�unuz say�lar aras�ndaki en b�y�k olan�: %d\n",buyukSayi);

    return 0;
}
