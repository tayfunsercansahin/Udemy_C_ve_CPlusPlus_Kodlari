#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL,"Turkish");
    // STRLWR = diziyi küçük harfle yaz | STRUPR = diziyi büyük harfle yaz
    char kelime[20];
    printf("Lütfen küçük harfli bir kelime giriniz\n");
    scanf("%s",&kelime);

    printf("Girdiðiniz kelime küçük harfliydi, büyük harfe çevrildi: %s",strupr(kelime));
    //printf("Girdiðiniz kelime büyük harfliydi, küçük harfe çevrildi: %s",strlwr(kelime));
    return 0;
}
