#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    //char isim[4]="Cam";
    /*char isim[4]={'C','a','m','\0'};

    for(int i=0;i<4;i++){
        printf("%d.eleman� = %c \n",i,isim[i]);

        if(isim[i]=='\0'){
            printf("Dizimiz tamamland�");
        }
    }
    ---------------------------------------------------*/
    /*
    char takimIsmi[]={'B','a','r','�','a','\0'};

    for(int i=0;i<6;i++){
        printf("%c",takimIsmi[i]);
    }

    printf("XX");
    ----------------------------------------------------*/
    /*
    char takimIsmi[]={'B','a','r','�','a','\0'};

    printf("%s",takimIsmi);
    printf("XXX");
    ----------------------------------------------------*/
    /*
    char takimIsmi[]="Barcelona";

    printf("%s",takimIsmi);
    printf("XXXX");
    ----------------------------------------------------*/
    /*char ulkeler[5];

    printf("L�tfen bir karakter dizisi giriniz\n");
    scanf("%s",&ulkeler);

    printf("%s",ulkeler);
    ----------------------------------------------------*/
    char ulkeler[7]; //fransa ve 1 bo�luk

    for(int i=0;i<6;i++){
        printf("L�tfen bir karakter dizisi giriniz\n");
        scanf(" %c",&ulkeler[i]);
    }

    printf("%s",ulkeler);

    return 0;
}
