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
            printf("Ka� tane bilet istiyorsunuz\n");
            scanf("%d",&alinanBiletSayisi);

            if(alinanBiletSayisi<=biletSayisi){
                biletSayisi-=alinanBiletSayisi;
            }
            else{
                printf("L�tfen al�nabilecek bilet say�s�na g�re bilet al�n�z\n");
            }

            printf("Al�nabilecek toplam bilet say�s�: %d\n",biletSayisi);
        }
        else{
            break;
        }
    }

    printf("Al�nan bilet say�s�: %d\nKalan bilet say�s�: %d\n",100-biletSayisi,biletSayisi);

    return 0;

    //----------------------------------------------

    /*int sayi, toplam=0;

    printf("L�tfen bir say� giriniz\a\n");
    scanf("%d",&sayi);

    for(int i=0;i<=sayi;i++){
        toplam+=i;
    }

    printf("0'dan %d'ye kadar olan say�lar�n toplam�: %d'dir\n",sayi,toplam);

    --------------------------------------------------------------------------------------
    int sayi;

    printf("Girdi�iniz say� ile 0 aras�nda kalan 5'e b�l�nebilen say�lar� bast�ral�m\n");
    printf("L�tfen bir say� giriniz\a\n");
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
