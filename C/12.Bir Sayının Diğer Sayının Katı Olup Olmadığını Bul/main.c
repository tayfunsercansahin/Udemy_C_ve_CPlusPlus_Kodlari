#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    int buyukSayi,kucukSayi;
    printf("Birbirinin kat� oldu�unu ��renmek istedi�iniz 2 tane tamsay�y� girin:\a\n");
    printf("(�nce b�y�k say�y� daha sonra k���k say�y� giriniz)\n");
    scanf("%d%d",&buyukSayi,&kucukSayi);

    if(buyukSayi%kucukSayi==0){
        printf("%d, %d'nin bir �arpan�d�r",kucukSayi,buyukSayi);
    }
    else{
        printf("%d, %d'nin bir �arpan� de�ildir",kucukSayi,buyukSayi);
    }

    return 0;
}
