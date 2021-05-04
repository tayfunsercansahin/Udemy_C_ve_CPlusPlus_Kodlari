#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    int secim;
    float sayi1,sayi2;
    menu: printf("\nBir iþlem seçiniz:\a\n");
    printf("1.Toplama\n2.Çýkarma\n3.Çarpma\n4.Bölme\n5.Karekök\n6.Kuvvet\n");
    printf("Lütfen çýkmak için -1 deðerini giriniz\n");
    scanf("%d",&secim);

    if(secim==-1){
        goto cikis;
    }

    if(secim>=1 && secim<=6){
    printf("Lütfen 2 adet sayý giriniz:\n");
    scanf("%f%f",&sayi1,&sayi2);
    }

    switch(secim){
    case 1: printf("Toplama: %.2f\n",sayi1+sayi2); break;
    case 2: printf("Çýkarma: %.2f\n",sayi1-sayi2); break;
    case 3: printf("Çarpma: %.2f\n",sayi1*sayi2); break;
    case 4: printf("Bölme: %.2f\n",sayi1/sayi2); break;
    case 5: printf("Karekök %.2f = %.2f \nKarekök %.2f = %.2f\n",sayi1,sqrt(sayi1),sayi2,sqrt(sayi2)); break;
    case 6: printf("%.2f üzeri %.2f = %.2f\n",sayi1,sayi2,pow(sayi1,sayi2)); break;
    default: printf("1-6 arasýnda bir iþlem seçiniz\n"); break;
    }

    goto menu;
    cikis:
        printf("Hesaplama iþlemleri sona erdi, istediðinde yine gel\n");
        return 0;
}
