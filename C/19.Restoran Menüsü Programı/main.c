#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    printf("MEN�\t\tS�PAR�� KODU\tF�YATI\n");
    printf("Ba�lang��lar\t\t1\t5.5 TL\n");
    printf("Ara S�caklar\t\t2\t7.5 TL\n");
    printf("Salatalar\t\t3\t12 TL\n");
    printf("Ana Yemekler\t\t4\t17.75 TL\n");
    printf("Tatl�lar\t\t5\t11.25 TL\n");
    printf("��ecekler\t\t6\t2.25 TL\n");

    int siparisNo;
    float toplamTutar,porsiyon;
    menu: printf("\nL�tfen istedi�iniz men�n�n sipari� kodunu giriniz:\a\n");
    printf("Men�den ��kmak i�in -1 de�erini giriniz\n");
    scanf("%d",&siparisNo);

    if(siparisNo==-1){
        goto cikis;
    }

    if(siparisNo>=1 && siparisNo<=6){
        printf("Ka� porsiyon istiyorsunuz\n");
        scanf("%f",&porsiyon);
    }

    switch(siparisNo){
        case 1: if(porsiyon>0){toplamTutar+=porsiyon*5.5;} else{printf("S�f�rdan b�y�k porsiyon giriniz");} break;
        case 2: if(porsiyon>0){toplamTutar+=porsiyon*7.5;} else{printf("S�f�rdan b�y�k porsiyon giriniz");} break;
        case 3: if(porsiyon>0){toplamTutar+=porsiyon*12;} else{printf("S�f�rdan b�y�k porsiyon giriniz");} break;
        case 4: if(porsiyon>0){toplamTutar+=porsiyon*17.75;} else{printf("S�f�rdan b�y�k porsiyon giriniz");} break;
        case 5: if(porsiyon>0){toplamTutar+=porsiyon*11.25;} else{printf("S�f�rdan b�y�k porsiyon giriniz");} break;
        case 6: if(porsiyon>0){toplamTutar+=porsiyon*2.25;} else{printf("S�f�rdan b�y�k porsiyon giriniz");} break;
        default: printf("L�tfen 1-6 aras�nda bir se�im yap�n�z\n"); break;
    }

    printf("Toplam tutar: %.2f\n",toplamTutar);

    goto menu;
    cikis:
        printf("Sipari�iniz tamamland�");
        return 0;
}
