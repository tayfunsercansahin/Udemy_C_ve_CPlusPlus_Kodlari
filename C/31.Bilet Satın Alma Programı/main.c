#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    int biletSayisi;
    char biletAl;

    for(biletSayisi=100;biletSayisi>0;     ){
        printf("Bilet almak ister misiniz? [E/e]\n");
        scanf(" %c",&biletAl);

        if(biletAl=='e' || biletAl=='E'){
            int alinanBiletSayisi;
            printf("Kaç tane bilet istiyorsunuz\n");
            scanf("%d",&alinanBiletSayisi);

            if(alinanBiletSayisi<=biletSayisi){
                biletSayisi-=alinanBiletSayisi;
            }
            else{
                printf("Lütfen alýnabilecek bilet sayýsýna göre bilet alýnýz\n");
            }

            printf("Alýnabilecek toplam bilet sayýsý: %d\n",biletSayisi);
        }
        else{
            break;
        }
    }

    printf("Alýnan bilet sayýsý: %d\nKalan bilet sayýsý: %d\n",100-biletSayisi,biletSayisi);

    return 0;

    //----------------------------------------------

    /*int sayi, toplam=0;

    printf("Lütfen bir sayý giriniz\a\n");
    scanf("%d",&sayi);

    for(int i=0;i<=sayi;i++){
        toplam+=i;
    }

    printf("0'dan %d'ye kadar olan sayýlarýn toplamý: %d'dir\n",sayi,toplam);

    --------------------------------------------------------------------------------------
    int sayi;

    printf("Girdiðiniz sayý ile 0 arasýnda kalan 5'e bölünebilen sayýlarý bastýralým\n");
    printf("Lütfen bir sayý giriniz\a\n");
    scanf("%d",&sayi);

    if(sayi>=0){
        for(int i=0;i<sayi;i+=5){
            printf("%d\n",i);
        }
    }
    else{
        for(int i=0;i>sayi;i-=5){
            printf("%d\n",i);
        }
    }   */
}
