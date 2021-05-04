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

        printf("Parolanýzý giriniz\a\n");
        scanf("%s",&sifre);
        printf("Parolanýzý tekrar giriniz\a\n");
        scanf("%s",&sifreDogrulama);

        while( !(sifre[i]=='\0' && sifreDogrulama[i]=='\0') ){
                if(sifre[i]!=sifreDogrulama[i]){
                    printf("Hatalý giriþ yaptýnýz. Lütfen 2 þifrenizi de ayný giriniz\n");
                    yanlis=1;
                    break;
                }

                else{
                    i++;
                }
        }

        if(yanlis==0){
            printf("2 þifre de eþleþti, kaydýnýz tamamlandý\n");
            printf("Þifreniz:\n%s\n%s\n",sifre,sifreDogrulama);
            break;
        }
    }

    return 0;
}
