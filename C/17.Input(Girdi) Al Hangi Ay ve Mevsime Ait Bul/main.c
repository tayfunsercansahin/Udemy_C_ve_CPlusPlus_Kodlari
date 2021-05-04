#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    int ayinNumarasi;
    char ayinMevsimi;
    printf("Öðrenmek istediðiniz ayýn numarasýný giriniz:\a\n");
    scanf("%d",&ayinNumarasi);

    switch(ayinNumarasi){
        case 1:
            printf("%d numaralý ay: Ocak\n",ayinNumarasi);
            ayinMevsimi='K';
            break;
        case 2:
            printf("%d numaralý ay: Þubat\n",ayinNumarasi);
            ayinMevsimi='K';
            break;
        case 3:
            printf("%d numaralý ay: Mart\n",ayinNumarasi);
            ayinMevsimi='I';
            break;
        case 4:
            printf("%d numaralý ay: Nisan\n",ayinNumarasi);
            ayinMevsimi='I';
            break;
        case 5:
            printf("%d numaralý ay: Mayýs\n",ayinNumarasi);
            ayinMevsimi='I';
            break;
        case 6:
            printf("%d numaralý ay: Haziran\n",ayinNumarasi);
            ayinMevsimi='Y';
            break;
        case 7:
            printf("%d numaralý ay: Temmuz\n",ayinNumarasi);
            ayinMevsimi='Y';
            break;
        case 8:
            printf("%d numaralý ay: Aðustos\n",ayinNumarasi);
            ayinMevsimi='Y';
            break;
        case 9:
            printf("%d numaralý ay: Eylül\n",ayinNumarasi);
            ayinMevsimi='S';
            break;
        case 10:
            printf("%d numaralý ay: Ekim\n",ayinNumarasi);
            ayinMevsimi='S';
            break;
        case 11:
            printf("%d numaralý ay: Kasým\n",ayinNumarasi);
            ayinMevsimi='S';
            break;
        case 12:
            printf("%d numaralý ay: Aralýk\n",ayinNumarasi);
            ayinMevsimi='K';
            break;
        default:
            printf("Lütfen 1-12 arasýnda bir deðer giriniz\n");
            break;
    }

    if(ayinMevsimi=='I'){
        printf("Ýlkbahar mevsimi");
    }
    else if(ayinMevsimi=='Y'){
        printf("Yaz mevsimi");
    }
    else if(ayinMevsimi=='S'){
        printf("Sonbahar mevsimi");
    }
    else if(ayinMevsimi=='K'){
        printf("Kýþ mevsimi");
    }
    else{
        printf("Lütfen I-Y-S-K karakterlerinden birisini giriniz");
    }

    return 0;
}
