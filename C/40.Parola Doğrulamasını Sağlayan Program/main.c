#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    char sifre[80], sifreDogrulama[80];
    int i, yanlis;

    while(1){
        yanlis=0;
        i=0;

        printf("Parolan�z� giriniz\a\n");
        scanf("%s",&sifre);
        printf("Parolan�z� tekrar giriniz\a\n");
        scanf("%s",&sifreDogrulama);

        while( !(sifre[i]=='\0' && sifreDogrulama[i]=='\0') ){
                if(sifre[i]!=sifreDogrulama[i]){
                    printf("Hatal� giri� yapt�n�z. L�tfen 2 �ifrenizi de ayn� giriniz\n");
                    yanlis=1;
                    break;
                }

                else{
                    i++;
                }
        }

        if(yanlis==0){
            printf("2 �ifre de e�le�ti, kayd�n�z tamamland�\n");
            printf("�ifreniz:\n%s\n%s\n",sifre,sifreDogrulama);
            break;
        }
    }

    return 0;
}
