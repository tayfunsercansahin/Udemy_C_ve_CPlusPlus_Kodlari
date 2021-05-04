#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    /*int sayi;
    printf("Bir sayý giriniz:\a\n");
    scanf("%d",&sayi);

    if(sayi%10==0){
        printf("%d, 10'a bölünüyor",sayi);
    }
    else{
        printf("%d, 10'a bölünmüyor",sayi);
    }*/

    char cinsiyet;
    int boy;
    printf("Lütfen sırasıyla cinsiyetinizi ve boyunuzu(cm) giriniz(E/K):\a\n");
    scanf("%c%d",&cinsiyet,&boy);

    if((cinsiyet=='E' || cinsiyet=='e') && boy>=160){
        printf("Mülakatı geçtiniz");
    }
    else if((cinsiyet=='K' || cinsiyet=='k') && boy>=150){
        printf("Mülakatı geçtiniz");
    }
    else{
        printf("Elendiniz");
    }

    return 0;
}
