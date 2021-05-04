#include <stdio.h>
#include <stdlib.h>

int main(){
    int sayi;
    float kesirliSayi;
    double kesirliSayi2;
    char karakter;
    char karakterDizisi[5];

    printf("Lutfen Integer Sayi Girin \n");
    scanf("%d",&sayi);
    printf("Lutfen Float Sayi Girin \n");
    scanf("%f",&kesirliSayi);
    printf("Lutfen Double Sayi Girin \n");
    scanf("%lf",&kesirliSayi2);
    printf("Lutfen Bir Karakter Girin \n");
    scanf(" %c",&karakter);
    printf("Lutfen 4 Karakter Girin \n");
    scanf("%s",karakterDizisi);

    printf("Girdiginiz: %d \n",sayi);
    printf("Girdiginiz: %f \n",kesirliSayi);
    printf("Girdiginiz: %lf \n",kesirliSayi2);
    printf("Girdiginiz: %c \n",karakter);
    printf("Girdiginiz: %s \n",karakterDizisi);

    return 0;
}
