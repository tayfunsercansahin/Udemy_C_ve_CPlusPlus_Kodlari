#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    int sayi;
    printf("\"Tek\" mi \"Çift\" mi olduðunu öðrenmek istediðiniz sayýyý girin:\a\n");
    scanf("%d",&sayi);

    if(sayi%2==0){
        printf("%d çift sayýdýr",sayi);
    }
    else if(sayi%2!=0){
        printf("%d tek sayýdýr",sayi);
    }

    return 0;
}
