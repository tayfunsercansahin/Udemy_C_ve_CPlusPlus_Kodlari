#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    char kelime[20];
    char kelimeninTersi[20];
    printf("L�tfen bir kelime giriniz\n");
    gets(kelime);
    //printf("Girdi�iniz kelimenin tersi \"%s\"\n",strrev(kelime)); // kelimenin tersini yazd�r
    strcpy(kelimeninTersi,kelime); // dizi kopyalama
    strrev(kelimeninTersi); // kelime tersi alma

    printf("Palindrom �rnekleri: (mum=mum),(kelek=kelek)\n");
    if(strcmp(kelime,kelimeninTersi)==0){
        printf("%s palindrom bir ifadedir\n",kelime);
    }
    else{
        printf("%s palindrom bir ifade de�ildir\n",kelime);
    }
    return 0;
}
