#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define pi 3.14
int main(){
    setlocale(LC_ALL,"Turkish");

    float r,x;

    printf("Dairenin yar��ap�n� giriniz: \n");
    scanf("%f",&r);
    printf("Dairenin alan� %.2f , �evresi %.2f \n",pi*r*r,2*pi*r);

    printf("K�p�n bir kenar�n� giriniz: \n");
    scanf("%f",&x);
    printf("K�p�n alan� %.2f , hacmi %.2f \n",6*x*x,x*x*x);

    return 0;
}
