#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    double sayi;

    printf("Lütfen bir sayý giriniz\n");
    scanf("%lf",&sayi);

    double y=0;

    for(int k=1;k<=50;k++){

    for(int i=1;i<=k;i++){
        float j=i;
        y+=(1/j)*pow(((sayi-1)/sayi),j);
    }
    printf("%d.terimin deðeri: %lf\n",k,y);
    y=0;
    }
    return 0;
}
