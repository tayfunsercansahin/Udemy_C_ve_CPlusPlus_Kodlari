#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> // Yaz�l�mc� k�t�phanelerine eri�mek i�in

int main(){
    setlocale(LC_ALL,"Turkish");

    char isim[]="Kaan Academy";
    printf("�sim adl� dizinin karakter say�s� = %d\n",strlen(isim)); // uzunluk length

    char isim2[15];
    printf("L�tfen bir kelime giriniz\n");
    /*scanf("%s",&isim2); gets ile al�rsak "Kaan Academy" gibi bo�luklu dizide hepsini yazar
    */ gets(isim2);

    int uzunluk=strlen(isim2);
    printf("\"%s\" kelimesinin uzunlu�u: %d\n",isim2,uzunluk);

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
    printf("Parolay� giriniz\n");
    gets(parola); // gets scanf ile ayn� i�levdir

    if(strlen(parola)>=10){
        printf("Parolan�z olu�turuldu\n");
    }
    else{
        printf("Parola olu�turma ba�ar�s�z\n");
    }
    return 0;
}
