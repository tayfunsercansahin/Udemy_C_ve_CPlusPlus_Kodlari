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
    printf("L�tfen pozitif bir tam say� giriniz\n");
    scanf("%d",&sayi);

    if(sayi>=0){
        printf("1-%d aras�ndaki say�lar�n toplam� = %d\n",sayi,toplama(sayi));
    }
    else{
        printf("L�tfen pozitif bir tam say� giriniz\n");
    }
    return 0;
}
