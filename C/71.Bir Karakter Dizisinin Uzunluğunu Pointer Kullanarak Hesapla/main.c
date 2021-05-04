#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int dizininUzunlugunuBul(char *dizininAdresi){
    int dizininUzunlugu=0;

    for(int i=0;dizininAdresi[i]!='\0';i++){
        dizininUzunlugu++;
    }
    return dizininUzunlugu;
}

int main(){
    setlocale(LC_ALL,"Turkish");

    char isim[]="Kaan Academy";
    printf("\"%s\" dizisinin uzunluðu kontrol ediliyor...\n",isim);
    printf("Dizinin uzunluðu: %d\n",dizininUzunlugunuBul(&isim));
    printf("STRLEN ile: %d\n",strlen(isim));
    return 0;
}
