#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    printf("MENÜ\t\tSÝPARÝÞ KODU\tFÝYATI\n");
    printf("Baþlangýçlar\t\t1\t5.5 TL\n");
    printf("Ara Sýcaklar\t\t2\t7.5 TL\n");
    printf("Salatalar\t\t3\t12 TL\n");
    printf("Ana Yemekler\t\t4\t17.75 TL\n");
    printf("Tatlýlar\t\t5\t11.25 TL\n");
    printf("Ýçecekler\t\t6\t2.25 TL\n");

    int siparisNo;
    float toplamTutar,porsiyon;
    menu: printf("\nLütfen istediðiniz menünün sipariþ kodunu giriniz:\a\n");
    printf("Menüden çýkmak için -1 deðerini giriniz\n");
    scanf("%d",&siparisNo);

    if(siparisNo==-1){
        goto cikis;
    }

    if(siparisNo>=1 && siparisNo<=6){
        printf("Kaç porsiyon istiyorsunuz\n");
        scanf("%f",&porsiyon);
    }

    switch(siparisNo){
        case 1: if(porsiyon>0){toplamTutar+=porsiyon*5.5;} else{printf("Sýfýrdan büyük porsiyon giriniz");} break;
        case 2: if(porsiyon>0){toplamTutar+=porsiyon*7.5;} else{printf("Sýfýrdan büyük porsiyon giriniz");} break;
        case 3: if(porsiyon>0){toplamTutar+=porsiyon*12;} else{printf("Sýfýrdan büyük porsiyon giriniz");} break;
        case 4: if(porsiyon>0){toplamTutar+=porsiyon*17.75;} else{printf("Sýfýrdan büyük porsiyon giriniz");} break;
        case 5: if(porsiyon>0){toplamTutar+=porsiyon*11.25;} else{printf("Sýfýrdan büyük porsiyon giriniz");} break;
        case 6: if(porsiyon>0){toplamTutar+=porsiyon*2.25;} else{printf("Sýfýrdan büyük porsiyon giriniz");} break;
        default: printf("Lütfen 1-6 arasýnda bir seçim yapýnýz\n"); break;
    }

    printf("Toplam tutar: %.2f\n",toplamTutar);

    goto menu;
    cikis:
        printf("Sipariþiniz tamamlandý");
        return 0;
}
