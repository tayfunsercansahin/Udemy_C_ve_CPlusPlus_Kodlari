#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");
/*  int *sayiDizisi=calloc(4,sizeof(int));

    sayiDizisi[0]=5;
    sayiDizisi[1]=15;
    sayiDizisi[2]=25;
    printf("Dizinin ilk 3 elemaný mevcut. Siz 4.elemaný giriniz\n");
    scanf("%d",&sayiDizisi[3]);

    int toplam=0;

    for(int i=0;i<4;i++){
        toplam=toplam+sayiDizisi[i];
    }

    printf("Dizinin deðerler toplamý: %d\n",toplam);
    ------------------------------------------------------------------------*/
 /* char *karakterDizisi=calloc(4,sizeof(char));

    karakterDizisi[0]='K';
    karakterDizisi[1]='A';
    karakterDizisi[2]='A';
    printf("Dizinin ilk 3 elemaný mevcut. Siz 4.elemaný giriniz\n");
    scanf("%c",&karakterDizisi[3]);

    for(int i=0;i<4;i++){
        printf("%c ",karakterDizisi[i]);
    }
    ------------------------------------------------------------------------*/
    char** cokBoyutluKarakterDizisi;

    cokBoyutluKarakterDizisi=malloc(sizeof(char*)*3);

    for(int i=0;i<3;i++){
        cokBoyutluKarakterDizisi[i]=malloc(10*sizeof(char));
    }

    cokBoyutluKarakterDizisi[0]="Kaan";
    cokBoyutluKarakterDizisi[1]="Academy";
    cokBoyutluKarakterDizisi[2]="Hoþgeldin";

    for(int i=0;i<3;i++){
        printf("%s\n",cokBoyutluKarakterDizisi[i]);
    }
    return 0;
}
