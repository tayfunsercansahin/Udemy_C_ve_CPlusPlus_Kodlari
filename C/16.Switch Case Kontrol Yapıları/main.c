#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

/*  int secim;
    printf("L�tfen bir se�im yap�n�z:\a\n");
    printf("1.�lkbahar\n2.Yaz\n3.Sonbahar\n4.K��\n");
    scanf("%d",&secim);

    switch(secim){
        case 1: printf("Hava �ok g�zel"); break;
        case 2: printf("Hava �ok s�cak"); break;
        case 3: printf("Hava ya�murlu"); break;
        case 4: printf("Hava karl�"); break;
        default: printf("L�tfen 1-4 aras�nda bir se�im yap�n�z");
    }*/

    char karaktereGoreSecim;
    printf("L�tfen bir karakter giriniz:\a\n");
    scanf("%c",&karaktereGoreSecim);

    switch(karaktereGoreSecim){
        case 'a': printf("Ali geldi\n"); break;
        case 'b': printf("Banu geldi\n"); break;
        case 'c': printf("Canan geldi\n"); break;
        default: printf("B�yle birisini tan�m�yorum\n"); break;
    }

    printf("Switch-Case i�lemi tamamland�");

    return 0;
}
