#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    /*char ogrenciIsmi[20]={"Kaan Academy\n"};

    printf("%s",ogrenciIsmi);

    for(int i=0;i<20;i++){
        printf("%c\n",ogrenciIsmi[i]);
    }
    ---------------------------------------------------*/
    /*
    char ogrenci[4][20]={"Kaan","Fatih","Hasan","Mert"};

    for(int i=0;i<4;i++){
        printf("%s ",ogrenci[i]);
    }

    printf("\nYukardakiler string, a�a��dakiler char\n");

    for(int i=0;i<4;i++){
        for(int j=0;j<20;j++){
            printf("%c",ogrenci[i][j]);
        }
        printf("\n");
    }
    -----------------------------------------------------------*/
    char ogrenci[2][5][20]; //2 s�n�f var ve her s�n�fta 5'er ��renci var. 20 olan isim i�in.

    for(int i=0;i<2;i++){
        for(int j=0;j<5;j++){
            printf("%d.s�n�ftaki %d.��rencinin ismini giriniz\n",i+1,j+1);
            scanf("%s",&ogrenci[i][j]);
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<5;j++){
            printf("%d.s�n�ftaki %d.��rencinin ismi: %s\n",i+1,j+1,ogrenci[i][j]);
        }
        printf("\n");
    }
    return 0;
}
