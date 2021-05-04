#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    int buyukSayi,kucukSayi;
    printf("Birbirinin katý olduðunu öðrenmek istediðiniz 2 tane tamsayýyý girin:\a\n");
    printf("(Önce büyük sayýyý daha sonra küçük sayýyý giriniz)\n");
    scanf("%d%d",&buyukSayi,&kucukSayi);

    if(buyukSayi%kucukSayi==0){
        printf("%d, %d'nin bir çarpanýdýr",kucukSayi,buyukSayi);
    }
    else{
        printf("%d, %d'nin bir çarpaný deðildir",kucukSayi,buyukSayi);
    }

    return 0;
}
