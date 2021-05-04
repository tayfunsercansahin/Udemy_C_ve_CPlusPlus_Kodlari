#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main(){
    setlocale(LC_ALL,"Turkish");

    FILE *dosya;

    char karakter[30];

    if((dosya=fopen("C:\\.TAYFUN\\C++\\(KAAN) C ve C++\\999.Metin Belgeleri\\yazilar.txt","r"))!=NULL){
        fgets(karakter,50,dosya);
        puts(karakter);
    }
    else{
        printf("Dosya sistemde bulunamadý...\n");
    }
    return 0;
}
