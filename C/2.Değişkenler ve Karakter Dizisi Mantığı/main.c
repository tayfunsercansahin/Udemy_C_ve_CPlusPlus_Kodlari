#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamSayi=6; //4 byte
    double buyukYerKaplayanKesirliSayi=7.2; // 8 byte
    float kesirliSayi=9.2; // 1 byte
    char karakter='K'; // 1 byte
    char karakterDizisi[13]="Kaan Academy"; // 10 karakter için 10 byte
    char karakterDizisi2[6]="Ahmet"; // 1 fazlasýný yaz rakam olarak

    printf("%d RAM'de %d byte yer kaplar \n",tamSayi,sizeof(int));
    printf("%f \n",buyukYerKaplayanKesirliSayi);
    printf("%.2f \n",kesirliSayi);
    printf("%c \n",karakter);
    printf("%s \n",karakterDizisi);
    printf("%s",karakterDizisi2);

    return 0;
}
