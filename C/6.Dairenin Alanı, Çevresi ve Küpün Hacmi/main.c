#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define pi 3.14
int main(){
    setlocale(LC_ALL,"Turkish");

    float r,x;

    printf("Dairenin yarýçapýný giriniz: \n");
    scanf("%f",&r);
    printf("Dairenin alaný %.2f , çevresi %.2f \n",pi*r*r,2*pi*r);

    printf("Küpün bir kenarýný giriniz: \n");
    scanf("%f",&x);
    printf("Küpün alaný %.2f , hacmi %.2f \n",6*x*x,x*x*x);

    return 0;
}
