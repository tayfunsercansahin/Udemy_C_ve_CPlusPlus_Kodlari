#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    int i=0;

    //while'nin i�i �art� sa�lad��� s�rece yani true ise d�ng� d�nmeye devam eder
    while(i<10){
        printf("%d While d�ng�s�ne ba�lad�k\n",i);
        i++;
    }

    return 0;
}
