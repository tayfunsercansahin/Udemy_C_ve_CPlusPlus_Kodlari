#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    float a,b,c,x;
    printf("S�ras�yla a,b,c,x de�erlerini giriniz:\n");
    scanf("%f%f%f%f",&a,&b,&c,&x);

    float sonuc=a*x*x + b*x +c;
    printf("Denklemin sonucu: %.2f\n",sonuc);

    int k=30;
    printf("�ntegeri floata �evirme %.2f",(float)k);

    return 0;
}
