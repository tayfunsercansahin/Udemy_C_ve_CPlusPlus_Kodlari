#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    int i=0;

    //while'nin içi þartý saðladýðý sürece yani true ise döngü dönmeye devam eder
    while(i<10){
        printf("%d While döngüsüne baþladýk\n",i);
        i++;
    }

    return 0;
}
