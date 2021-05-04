#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL,"Turkish");
    /*char meyve1[]="Kiraz";
    char meyve2[]="Muz";

    if(strcmp(meyve1,meyve2)==0){
        printf("Bu kelimeler birbirine eþittir\n");
    }
    else if(strcmp(meyve1,meyve2)<0){
        printf("%s , %s'den alfabede daha önce geliyor\n",meyve1,meyve2);
    }
    else if(strcmp(meyve1,meyve2)>0){
        printf("%s , %s'den alfabede daha önce geliyor\n",meyve2,meyve1);
    }
    --------------------------------------------------------------------------*/
    char kullaniciAdi[20];
    char parola[20];
    char gercekKullaniciAdi[20]="admin";
    char gercekParola[20]="admin123";

    printf("Lütfen kullanýcý adýnýzý ve parolanýzý giriniz\n");
    scanf("%s%s",&kullaniciAdi,&parola);

    if(strcmp(kullaniciAdi,gercekKullaniciAdi)==0 && strcmp(parola,gercekParola)==0){
        printf("Kullanýcý adý ve þifre eþleþti, HOÞGELDÝNÝZ!\n");
    }
    else{
        printf("Giriþ bilgileriniz yanlýþtýr\n");
    }

    if(strcmp(kullaniciAdi,gercekKullaniciAdi)!=0){
        printf("Kullanýcý adýnýzý yanlýþ girdiniz\n");
    }

    if(strcmp(parola,gercekParola)!=0){
        printf("Parolanýzý yanlýþ girdiniz\n");
    }
    return 0;
}
