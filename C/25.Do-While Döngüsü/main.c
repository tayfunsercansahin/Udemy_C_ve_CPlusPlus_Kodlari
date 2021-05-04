#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    int i=10;

    do{ // önce 1 kere döngüye girer sonra þartý kontrol eder. While'den farký budur.
        printf("%d\n",i);
        i++;
    } while(i<10);

    return 0;
}
