#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float celcius(float fahrenheit){
    return (fahrenheit-32)/1.8;
}

float fahrenheit(float celcius){
    return celcius*1.8+32;
}

int main(){
    setlocale(LC_ALL,"Turkish");

    /*
    float celciusDerece;
    printf("Fahrenheit'e dönüþtürmek istediðiniz Celcius deðerini giriniz\n");
    scanf("%f",&celciusDerece);
    printf("%.2f Celcius = %.2f Fahrenheit\n",celciusDerece,fahrenheit(celciusDerece));

    float fahrenheitDerece;
    printf("Celcius'a dönüþtürmek istediðiniz Fahrenheit deðerini giriniz\n");
    scanf("%f",&fahrenheitDerece);
    printf("%.2f Fahrenheit = %.2f Celcius\n",fahrenheitDerece,celcius(fahrenheitDerece));
    ---------------------------------------------------------------------------------------*/
    for(int i=32;i<=212;i++){
        printf("%d Fahrenheit = %.2f Celcius\n",i,celcius(i));
    }

    for(int i=0;i<=100;i++){
        printf("%d Celcius = %.2f Fahrenheit\n",i,fahrenheit(i));
    }
    return 0;
}
