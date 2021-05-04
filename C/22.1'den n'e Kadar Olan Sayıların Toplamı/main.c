#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    int sayi, x=1, toplam=0;

    printf("Lütfen kaça kadar bastýrmak istiyorsanýz giriniz\a\n");
    scanf("%d",&sayi);
    printf("\n");

    while(sayi>0){
        printf("%d\n",x);
        toplam+=sayi;
        x++;
        sayi--;
    }

    printf("Toplam: %d",toplam);
    return 0;
}
