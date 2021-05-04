#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    int ayinNumarasi;
    char ayinMevsimi;
    printf("��renmek istedi�iniz ay�n numaras�n� giriniz:\a\n");
    scanf("%d",&ayinNumarasi);

    switch(ayinNumarasi){
        case 1:
            printf("%d numaral� ay: Ocak\n",ayinNumarasi);
            ayinMevsimi='K';
            break;
        case 2:
            printf("%d numaral� ay: �ubat\n",ayinNumarasi);
            ayinMevsimi='K';
            break;
        case 3:
            printf("%d numaral� ay: Mart\n",ayinNumarasi);
            ayinMevsimi='I';
            break;
        case 4:
            printf("%d numaral� ay: Nisan\n",ayinNumarasi);
            ayinMevsimi='I';
            break;
        case 5:
            printf("%d numaral� ay: May�s\n",ayinNumarasi);
            ayinMevsimi='I';
            break;
        case 6:
            printf("%d numaral� ay: Haziran\n",ayinNumarasi);
            ayinMevsimi='Y';
            break;
        case 7:
            printf("%d numaral� ay: Temmuz\n",ayinNumarasi);
            ayinMevsimi='Y';
            break;
        case 8:
            printf("%d numaral� ay: A�ustos\n",ayinNumarasi);
            ayinMevsimi='Y';
            break;
        case 9:
            printf("%d numaral� ay: Eyl�l\n",ayinNumarasi);
            ayinMevsimi='S';
            break;
        case 10:
            printf("%d numaral� ay: Ekim\n",ayinNumarasi);
            ayinMevsimi='S';
            break;
        case 11:
            printf("%d numaral� ay: Kas�m\n",ayinNumarasi);
            ayinMevsimi='S';
            break;
        case 12:
            printf("%d numaral� ay: Aral�k\n",ayinNumarasi);
            ayinMevsimi='K';
            break;
        default:
            printf("L�tfen 1-12 aras�nda bir de�er giriniz\n");
            break;
    }

    if(ayinMevsimi=='I'){
        printf("�lkbahar mevsimi");
    }
    else if(ayinMevsimi=='Y'){
        printf("Yaz mevsimi");
    }
    else if(ayinMevsimi=='S'){
        printf("Sonbahar mevsimi");
    }
    else if(ayinMevsimi=='K'){
        printf("K�� mevsimi");
    }
    else{
        printf("L�tfen I-Y-S-K karakterlerinden birisini giriniz");
    }

    return 0;
}
