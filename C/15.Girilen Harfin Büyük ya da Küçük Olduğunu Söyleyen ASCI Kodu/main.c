#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");
    //65-90 arasý büyük harf , 97-122 arasý küçük harf
    char karakter;
    printf("ASCII deðerini öðrenmek istediðiniz karakteri giriniz:\a\n");
    scanf("%c",&karakter);
    printf("%c'nin ASCII deðeri %d'dir\n",karakter,karakter);

    int karakterinASCIIDegeri=karakter; //harfi integer yapýnca ascýý olur

    if(karakterinASCIIDegeri>=65 && karakterinASCIIDegeri<=90){
        printf("%d büyük bir harftir",karakterinASCIIDegeri);
    }
    else if(karakterinASCIIDegeri>=97 && karakterinASCIIDegeri<=122){
        printf("%d küçük bir harftir",karakterinASCIIDegeri);
    }
    else{
        printf("Lütfen A-Z ya da a-z aralýðýnda bir harf giriniz");
    }

    return 0;
}
