#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    int yas;
    printf("L�tfen ya��n�z� giriniz:\n");
    scanf("%d",&yas);

    if(yas>=18){
        printf("Re�itsiniz\n");
    }
    else{
        printf("Re�it de�ilsiniz\n");
    }
//---------------------------------------------------
    int puan;
    printf("0-100 aras�nda bir puan giriniz:\a\n");
    scanf("%d",&puan);

    if(puan>=80){
        printf("�ok iyi puan");
    }
    else if(puan>=60 && puan<80){
        printf("iyi puan");
    }
    else if(puan>=40 && puan<60){
        printf("orta puan");
    }
    else if(puan>=20 && puan<40){
        printf("k�t� puan");
    }
    else{
        printf("�ok k�t� puan");
    }

    return 0;
}
