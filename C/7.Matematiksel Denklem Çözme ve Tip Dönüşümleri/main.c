#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    float a,b,c,x;
    printf("Sýrasýyla a,b,c,x deðerlerini giriniz:\n");
    scanf("%f%f%f%f",&a,&b,&c,&x);

    float sonuc=a*x*x + b*x +c;
    printf("Denklemin sonucu: %.2f\n",sonuc);

    int k=30;
    printf("Ýntegeri floata çevirme %.2f",(float)k);

    return 0;
}
