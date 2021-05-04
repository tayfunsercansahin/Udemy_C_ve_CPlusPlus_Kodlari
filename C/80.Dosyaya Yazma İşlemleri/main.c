#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    FILE *dosyaninAdresi;
    // w->write   a->append
    dosyaninAdresi=fopen("C:\\.TAYFUN\\C++\\(KAAN) C ve C++\\999.Metin Belgeleri\\yazilar.txt","w"); // w yerine a'da yazýlabilir üstüne ekler
    /*---------------------------------------------------------------------------------
    fputc('K',dosyaninAdresi); // dosyanýn içine karakter ekle
    fprintf(dosyaninAdresi,"\n");
    fputs("Kaan Academy",dosyaninAdresi);
    ---------------------------------------------------------------------------------
    char isim[10];
    printf("Lütfen bir isim giriniz...\n");
    gets(isim);
    fprintf(dosyaninAdresi,"\nBenim adým %s",isim);
    ---------------------------------------------------------------------------------
    int sayi1, sayi2;
    printf("Lütfen 2 sayý giriniz\n");
    scanf("%d%d",&sayi1,&sayi2);
    int toplama=sayi1+sayi2;
    fprintf(dosyaninAdresi,"\n%d + %d = %d",sayi1,sayi2,toplama);
    ---------------------------------------------------------------------------------*/
    char ad[10], soyad[20];
    float maas;
    int yas;
    printf("Çalýþanýn adýný ve soyadýný giriniz...\n");
    gets(ad);
    gets(soyad);
    printf("Çalýþanýn maaþýný giriniz...\n");
    scanf("%f",&maas);
    printf("Çalýþanýn yaþýný giriniz...\n");
    scanf("%d",&yas);

    fprintf(dosyaninAdresi,"Çalýþan bilgileri:\n");
    fprintf(dosyaninAdresi,"Adý Soyadý: %s %s , Maaþý: %f TL , Yaþý: %d\n",ad,soyad,maas,yas);


    fclose(dosyaninAdresi);




    return 0;
}
