#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Turkish");
    //65-90 aras� b�y�k harf , 97-122 aras� k���k harf
    char karakter;
    printf("ASCII de�erini ��renmek istedi�iniz karakteri giriniz:\a\n");
    scanf("%c",&karakter);
    printf("%c'nin ASCII de�eri %d'dir\n",karakter,karakter);

    int karakterinASCIIDegeri=karakter; //harfi integer yap�nca asc�� olur

    if(karakterinASCIIDegeri>=65 && karakterinASCIIDegeri<=90){
        printf("%d b�y�k bir harftir",karakterinASCIIDegeri);
    }
    else if(karakterinASCIIDegeri>=97 && karakterinASCIIDegeri<=122){
        printf("%d k���k bir harftir",karakterinASCIIDegeri);
    }
    else{
        printf("L�tfen A-Z ya da a-z aral���nda bir harf giriniz");
    }

    return 0;
}
