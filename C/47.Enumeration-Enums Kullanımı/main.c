#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

enum hafta{Pazartesi=1,Sali,Carsamba,Persembe,Cuma,Cumartesi,Pazar};
enum aylar{Ocak=1,Mart=3,Haziran=6,Eylul=9};
enum mevsimler{Ilkbahar,Yaz,Sonbahar,Kis};

int main(){
    setlocale(LC_ALL,"Turkish");

    printf("Perþembe %d.gün\n",Persembe);
    printf("Haziran %d.ay\n",Haziran);

    for(int i=Pazartesi;i<=Pazar;i++){
        printf("%d\n",i);
    }

    printf("\nAy\n");

    for(int i=Ocak;i<=Eylul;i++){
        printf("%d\n",i);
    }

    printf("\nMevsim\n");

    for(int i=Ilkbahar;i<=Kis;i++){
        printf("%d\n",i);
    }
    return 0;
}
