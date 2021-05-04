#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    int yas;
    printf("Lütfen yaþýnýzý giriniz:\n");
    scanf("%d",&yas);

    if(yas>=18){
        printf("Reþitsiniz\n");
    }
    else{
        printf("Reþit deðilsiniz\n");
    }
//---------------------------------------------------
    int puan;
    printf("0-100 arasýnda bir puan giriniz:\a\n");
    scanf("%d",&puan);

    if(puan>=80){
        printf("çok iyi puan");
    }
    else if(puan>=60 && puan<80){
        printf("iyi puan");
    }
    else if(puan>=40 && puan<60){
        printf("orta puan");
    }
    else if(puan>=20 && puan<40){
        printf("kötü puan");
    }
    else{
        printf("çok kötü puan");
    }

    return 0;
}
