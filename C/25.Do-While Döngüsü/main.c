#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    int i=10;

    do{ // �nce 1 kere d�ng�ye girer sonra �art� kontrol eder. While'den fark� budur.
        printf("%d\n",i);
        i++;
    } while(i<10);

    return 0;
}
