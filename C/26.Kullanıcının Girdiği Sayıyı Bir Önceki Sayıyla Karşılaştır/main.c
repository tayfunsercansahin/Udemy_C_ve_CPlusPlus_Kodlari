#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    float sayi, buyuk=0;
    char devam;

    do{
        printf("Lütfen bir sayý giriniz\a\n");
        scanf("%f",&sayi);

        if(sayi>buyuk){
            buyuk=sayi;
            printf("Yeni büyük sayýmýz: %.2f\n",buyuk);
        }
        else{
            printf("Büyük sayý deðiþmedi, hala %.2f\n",buyuk);
        }

        printf("Büyük sayýyý hesaplamaya devam etmek istiyor musunuz? [E/e]\n");
        scanf(" %c",&devam);

    }while(devam=='E' || devam=='e');

    return 0;
}
