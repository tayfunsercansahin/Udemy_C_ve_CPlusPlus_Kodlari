#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL,"Turkish");
    // STRLWR = diziyi k���k harfle yaz | STRUPR = diziyi b�y�k harfle yaz
    char kelime[20];
    printf("L�tfen k���k harfli bir kelime giriniz\n");
    scanf("%s",&kelime);

    printf("Girdi�iniz kelime k���k harfliydi, b�y�k harfe �evrildi: %s",strupr(kelime));
    //printf("Girdi�iniz kelime b�y�k harfliydi, k���k harfe �evrildi: %s",strlwr(kelime));
    return 0;
}
