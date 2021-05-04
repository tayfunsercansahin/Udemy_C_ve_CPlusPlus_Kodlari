#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    char kelime[20];
    char kelimeninTersi[20];
    printf("Lütfen bir kelime giriniz\n");
    gets(kelime);
    //printf("Girdiðiniz kelimenin tersi \"%s\"\n",strrev(kelime)); // kelimenin tersini yazdýr
    strcpy(kelimeninTersi,kelime); // dizi kopyalama
    strrev(kelimeninTersi); // kelime tersi alma

    printf("Palindrom örnekleri: (mum=mum),(kelek=kelek)\n");
    if(strcmp(kelime,kelimeninTersi)==0){
        printf("%s palindrom bir ifadedir\n",kelime);
    }
    else{
        printf("%s palindrom bir ifade deðildir\n",kelime);
    }
    return 0;
}
