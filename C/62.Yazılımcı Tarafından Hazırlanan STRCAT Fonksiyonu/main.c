#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    char isim[10];
    char meslek[20];

    printf("L�tfen isim ve meslek giriniz\n");
    scanf("%s%s",&isim,&meslek);

    char kullanici[40]="";
    strcat(kullanici,isim);
    strcat(kullanici," ");
    strcat(kullanici,meslek);

    printf("Ad�: %s , Mesle�i: %s\n",isim,meslek);
    printf("Ad� ve mesle�i: %s\n",kullanici);
    return 0;
}
