#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");
    /*
    int dizi1[3][4]={ {1,5,7,8},{4,6,7,8},{9,5,11,3} };
    int dizi2[3][4]={ {7,8,1,4},{1,4,9,8},{3,4,7,2} };

    int toplam[3][4];

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            toplam[i][j]=dizi1[i][j]+dizi2[i][j];
        }
    }

    for(int i=0;i<3;i++)
        for(int j=0;j<4;j++)
            printf("%d ",toplam[i][j]);
    ---------------------------------------------------------------*/
    int dizi1[3][4];
    int dizi2[3][4];
    int toplam[3][4];

    printf("1.matrisi girmeye baþlýyorsunuz...\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d.satýr %d.sütundaki elemaný giriniz\n",i+1,j+1);
            scanf("%d",&dizi1[i][j]);
        }
    }

    system("CLS");

    printf("2.matrisi girmeye çalýþýyorsunuz...\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d.satýr %d.sütundaki elemaný giriniz\n",i+1,j+1);
            scanf("%d",&dizi2[i][j]);
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            toplam[i][j]=dizi1[i][j]+dizi2[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d ",toplam[i][j]);
        }
        printf("\n");
    }

    return 0;
}
