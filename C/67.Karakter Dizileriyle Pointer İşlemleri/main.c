#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");
/*  char *takimlar[]={"Balýkesirspor","Galatasaray","Beþiktaþ","Fenerbahçe","Trabzonspor"};

    for(int i=0;takimlar[i]!='0';i++){
        printf("%s\n",*(takimlar+i));
    }
    ---------------------------------------------------------------------------------------*/
    char ulkeler[5][20];

    for(int i=0;i<5;i++){
        printf("%d.ülkeyi giriniz\n",i+1);
        scanf("%s",&ulkeler[i]);
    }

    for(int i=0;i<5;i++){
        printf("%s\n",ulkeler[i]);
    }

    char *ulkelerinAdresleri[5];

    for(int i=0;i<5;i++){
        ulkelerinAdresleri[i]=ulkeler[i];
    }

    for(int i=0;i<5;i++){
        printf("%s ",*(ulkelerinAdresleri+i));
    }
    return 0;
}
