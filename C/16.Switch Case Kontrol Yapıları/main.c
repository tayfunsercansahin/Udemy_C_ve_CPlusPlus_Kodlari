#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

/*  int secim;
    printf("Lütfen bir seçim yapýnýz:\a\n");
    printf("1.Ýlkbahar\n2.Yaz\n3.Sonbahar\n4.Kýþ\n");
    scanf("%d",&secim);

    switch(secim){
        case 1: printf("Hava çok güzel"); break;
        case 2: printf("Hava çok sýcak"); break;
        case 3: printf("Hava yaðmurlu"); break;
        case 4: printf("Hava karlý"); break;
        default: printf("Lütfen 1-4 arasýnda bir seçim yapýnýz");
    }*/

    char karaktereGoreSecim;
    printf("Lütfen bir karakter giriniz:\a\n");
    scanf("%c",&karaktereGoreSecim);

    switch(karaktereGoreSecim){
        case 'a': printf("Ali geldi\n"); break;
        case 'b': printf("Banu geldi\n"); break;
        case 'c': printf("Canan geldi\n"); break;
        default: printf("Böyle birisini tanýmýyorum\n"); break;
    }

    printf("Switch-Case iþlemi tamamlandý");

    return 0;
}
