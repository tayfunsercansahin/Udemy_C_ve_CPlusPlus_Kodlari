#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    int sayi;
    printf("\"Tek\" mi \"�ift\" mi oldu�unu ��renmek istedi�iniz say�y� girin:\a\n");
    scanf("%d",&sayi);

    if(sayi%2==0){
        printf("%d �ift say�d�r",sayi);
    }
    else if(sayi%2!=0){
        printf("%d tek say�d�r",sayi);
    }

    return 0;
}
