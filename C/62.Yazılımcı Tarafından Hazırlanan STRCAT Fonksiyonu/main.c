#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    char isim[10];
    char meslek[20];

    printf("Lütfen isim ve meslek giriniz\n");
    scanf("%s%s",&isim,&meslek);

    char kullanici[40]="";
    strcat(kullanici,isim);
    strcat(kullanici," ");
    strcat(kullanici,meslek);

    printf("Adý: %s , Mesleði: %s\n",isim,meslek);
    printf("Adý ve mesleði: %s\n",kullanici);
    return 0;
}
