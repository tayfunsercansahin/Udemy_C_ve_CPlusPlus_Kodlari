#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    FILE *dosyaninAdresi;
    // w->write   a->append
    dosyaninAdresi=fopen("C:\\.TAYFUN\\C++\\(KAAN) C ve C++\\999.Metin Belgeleri\\yazilar.txt","w"); // w yerine a'da yaz�labilir �st�ne ekler
    /*---------------------------------------------------------------------------------
    fputc('K',dosyaninAdresi); // dosyan�n i�ine karakter ekle
    fprintf(dosyaninAdresi,"\n");
    fputs("Kaan Academy",dosyaninAdresi);
    ---------------------------------------------------------------------------------
    char isim[10];
    printf("L�tfen bir isim giriniz...\n");
    gets(isim);
    fprintf(dosyaninAdresi,"\nBenim ad�m %s",isim);
    ---------------------------------------------------------------------------------
    int sayi1, sayi2;
    printf("L�tfen 2 say� giriniz\n");
    scanf("%d%d",&sayi1,&sayi2);
    int toplama=sayi1+sayi2;
    fprintf(dosyaninAdresi,"\n%d + %d = %d",sayi1,sayi2,toplama);
    ---------------------------------------------------------------------------------*/
    char ad[10], soyad[20];
    float maas;
    int yas;
    printf("�al��an�n ad�n� ve soyad�n� giriniz...\n");
    gets(ad);
    gets(soyad);
    printf("�al��an�n maa��n� giriniz...\n");
    scanf("%f",&maas);
    printf("�al��an�n ya��n� giriniz...\n");
    scanf("%d",&yas);

    fprintf(dosyaninAdresi,"�al��an bilgileri:\n");
    fprintf(dosyaninAdresi,"Ad� Soyad�: %s %s , Maa��: %f TL , Ya��: %d\n",ad,soyad,maas,yas);


    fclose(dosyaninAdresi);




    return 0;
}
