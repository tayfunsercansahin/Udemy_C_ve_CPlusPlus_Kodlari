#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    /*int cokBoyutluDizi[3][2]={1,2,3,4,5,6};
    int cokBoyutluDizi2[3][2]={{11,12},{13,14},{15,16}};

    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%d ",cokBoyutluDizi2[i][j]);
        }

        printf("\n");
    }
    -------------------------------------------------------*/
    /*int satirSayisi, sutunSayisi;

    printf("Kaç satýr istiyorsunuz\n");
    scanf("%d",&satirSayisi);
    printf("Kaç sutun istiyorsunuz\n");
    scanf("%d",&sutunSayisi);

    int cokBoyutluDizi[satirSayisi][sutunSayisi];

    for(int i=0;i<satirSayisi;i++){
        for(int j=0;j<sutunSayisi;j++){
            printf("%d.satýrdaki ve %d.sütundaki elemaný giriniz\n",i,j);
            scanf("%d",&cokBoyutluDizi[i][j]);
        }
    }

    for(int i=0;i<satirSayisi;i++){
        for(int j=0;j<sutunSayisi;j++){
            printf("%d ",cokBoyutluDizi[i][j]);
        }

        printf("\n");
    }
    ---------------------------------------------------------------------*/
    int cokBoyutluDizi[2][2][2];

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<2;k++){
                printf("%d. %d. %d. elemaný giriniz\n",i,j,k);
                scanf("%d",&cokBoyutluDizi[i][j][k]);
            }
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                printf("%d",cokBoyutluDizi[i][j][k]);
            }

            printf("\n");
        }

        printf("\n");
    }

    return 0;
}
