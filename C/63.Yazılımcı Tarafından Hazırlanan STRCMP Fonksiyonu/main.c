#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL,"Turkish");
    /*char meyve1[]="Kiraz";
    char meyve2[]="Muz";

    if(strcmp(meyve1,meyve2)==0){
        printf("Bu kelimeler birbirine e�ittir\n");
    }
    else if(strcmp(meyve1,meyve2)<0){
        printf("%s , %s'den alfabede daha �nce geliyor\n",meyve1,meyve2);
    }
    else if(strcmp(meyve1,meyve2)>0){
        printf("%s , %s'den alfabede daha �nce geliyor\n",meyve2,meyve1);
    }
    --------------------------------------------------------------------------*/
    char kullaniciAdi[20];
    char parola[20];
    char gercekKullaniciAdi[20]="admin";
    char gercekParola[20]="admin123";

    printf("L�tfen kullan�c� ad�n�z� ve parolan�z� giriniz\n");
    scanf("%s%s",&kullaniciAdi,&parola);

    if(strcmp(kullaniciAdi,gercekKullaniciAdi)==0 && strcmp(parola,gercekParola)==0){
        printf("Kullan�c� ad� ve �ifre e�le�ti, HO�GELD�N�Z!\n");
    }
    else{
        printf("Giri� bilgileriniz yanl��t�r\n");
    }

    if(strcmp(kullaniciAdi,gercekKullaniciAdi)!=0){
        printf("Kullan�c� ad�n�z� yanl�� girdiniz\n");
    }

    if(strcmp(parola,gercekParola)!=0){
        printf("Parolan�z� yanl�� girdiniz\n");
    }
    return 0;
}
