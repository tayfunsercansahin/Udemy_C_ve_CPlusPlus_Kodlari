#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    int sayi,birler,onlar,yuzler,binler,onbinler;

    printf("5 basamaklý bir sayý giriniz:\a\n");
    scanf("%d",&sayi);
    //65432
    onbinler=sayi/10000;
    binler=(sayi%10000)/1000;
    yuzler=(sayi%1000)/100;
    onlar=(sayi%100)/10;
    birler=(sayi%10);

    printf("Sayý: %d %d %d %d %d",onbinler,binler,yuzler,onlar,birler);

    return 0;
}
