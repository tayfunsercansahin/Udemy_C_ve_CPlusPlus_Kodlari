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

    printf("\nYukardakiler string, aþaðýdakiler char\n");

    for(int i=0;i<4;i++){
        for(int j=0;j<20;j++){
            printf("%c",ogrenci[i][j]);
        }
        printf("\n");
    }
    -----------------------------------------------------------*/
    char ogrenci[2][5][20]; //2 sýnýf var ve her sýnýfta 5'er öðrenci var. 20 olan isim için.

    for(int i=0;i<2;i++){
        for(int j=0;j<5;j++){
            printf("%d.sýnýftaki %d.öðrencinin ismini giriniz\n",i+1,j+1);
            scanf("%s",&ogrenci[i][j]);
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<5;j++){
            printf("%d.sýnýftaki %d.öðrencinin ismi: %s\n",i+1,j+1,ogrenci[i][j]);
        }
        printf("\n");
    }
    return 0;
}
