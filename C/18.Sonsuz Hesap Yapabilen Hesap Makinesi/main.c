#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    int secim;
    float sayi1,sayi2;
    menu: printf("\nBir i�lem se�iniz:\a\n");
    printf("1.Toplama\n2.��karma\n3.�arpma\n4.B�lme\n5.Karek�k\n6.Kuvvet\n");
    printf("L�tfen ��kmak i�in -1 de�erini giriniz\n");
    scanf("%d",&secim);

    if(secim==-1){
        goto cikis;
    }

    if(secim>=1 && secim<=6){
    printf("L�tfen 2 adet say� giriniz:\n");
    scanf("%f%f",&sayi1,&sayi2);
    }

    switch(secim){
    case 1: printf("Toplama: %.2f\n",sayi1+sayi2); break;
    case 2: printf("��karma: %.2f\n",sayi1-sayi2); break;
    case 3: printf("�arpma: %.2f\n",sayi1*sayi2); break;
    case 4: printf("B�lme: %.2f\n",sayi1/sayi2); break;
    case 5: printf("Karek�k %.2f = %.2f \nKarek�k %.2f = %.2f\n",sayi1,sqrt(sayi1),sayi2,sqrt(sayi2)); break;
    case 6: printf("%.2f �zeri %.2f = %.2f\n",sayi1,sayi2,pow(sayi1,sayi2)); break;
    default: printf("1-6 aras�nda bir i�lem se�iniz\n"); break;
    }

    goto menu;
    cikis:
        printf("Hesaplama i�lemleri sona erdi, istedi�inde yine gel\n");
        return 0;
}
