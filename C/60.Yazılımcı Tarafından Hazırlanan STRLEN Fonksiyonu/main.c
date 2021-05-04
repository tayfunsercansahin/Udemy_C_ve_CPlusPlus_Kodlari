#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> // Yazýlýmcý kütüphanelerine eriþmek için

int main(){
    setlocale(LC_ALL,"Turkish");

    char isim[]="Kaan Academy";
    printf("Ýsim adlý dizinin karakter sayýsý = %d\n",strlen(isim)); // uzunluk length

    char isim2[15];
    printf("Lütfen bir kelime giriniz\n");
    /*scanf("%s",&isim2); gets ile alýrsak "Kaan Academy" gibi boþluklu dizide hepsini yazar
    */ gets(isim2);

    int uzunluk=strlen(isim2);
    printf("\"%s\" kelimesinin uzunluðu: %d\n",isim2,uzunluk);

    for(int i=0;i<uzunluk;i++){
        printf("%c",isim2[i]);
    }

    printf("\n");

    for(int i=uzunluk-1;i>=0;i--){
        printf("%c",isim2[i]);
    }
    printf("\n");
    //--------------------------------------------------------------------------
    char parola[50];
    printf("Parolayý giriniz\n");
    gets(parola); // gets scanf ile ayný iþlevdir

    if(strlen(parola)>=10){
        printf("Parolanýz oluþturuldu\n");
    }
    else{
        printf("Parola oluþturma baþarýsýz\n");
    }
    return 0;
}
