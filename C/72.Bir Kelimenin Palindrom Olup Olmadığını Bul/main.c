#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    char kelime[30];
    char *duzAdres, *tersAdres;
    printf("L�tfen palindrom olup olmad���n� ��renmek istedi�iniz kelimeyi giriniz\n");
    gets(kelime); // scanf ile ayn�

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
            puts(kelime); // printf ile ayn�
            printf("Palindromdur...\n");
        }
        else{
            puts(kelime); // printf ile ayn�
            printf("Palindrom de�ildir...\n");
        }
    return 0;
}
