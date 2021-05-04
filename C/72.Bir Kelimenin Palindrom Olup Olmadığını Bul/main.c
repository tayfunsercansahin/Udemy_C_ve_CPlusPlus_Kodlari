#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    char kelime[30];
    char *duzAdres, *tersAdres;
    printf("Lütfen palindrom olup olmadýðýný öðrenmek istediðiniz kelimeyi giriniz\n");
    gets(kelime); // scanf ile ayný

    for(tersAdres=kelime;*tersAdres!=NULL;tersAdres++);

        for(duzAdres=kelime,tersAdres--;tersAdres>=duzAdres;){
        if(*tersAdres==*duzAdres){
            tersAdres--;
            duzAdres++;
        }
        else{
            break;
        }
    }

        if(duzAdres>tersAdres){
            puts(kelime); // printf ile ayný
            printf("Palindromdur...\n");
        }
        else{
            puts(kelime); // printf ile ayný
            printf("Palindrom deðildir...\n");
        }
    return 0;
}
