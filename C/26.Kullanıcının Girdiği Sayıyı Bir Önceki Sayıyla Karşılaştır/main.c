#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    float sayi, buyuk=0;
    char devam;

    do{
        printf("L�tfen bir say� giriniz\a\n");
        scanf("%f",&sayi);

        if(sayi>buyuk){
            buyuk=sayi;
            printf("Yeni b�y�k say�m�z: %.2f\n",buyuk);
        }
        else{
            printf("B�y�k say� de�i�medi, hala %.2f\n",buyuk);
        }

        printf("B�y�k say�y� hesaplamaya devam etmek istiyor musunuz? [E/e]\n");
        scanf(" %c",&devam);

    }while(devam=='E' || devam=='e');

    return 0;
}
