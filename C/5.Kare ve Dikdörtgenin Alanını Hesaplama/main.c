#include <stdio.h>
#include <stdlib.h>

int main(){
    int kareninBirKenari;
    int dikdortgenKisaKenari;
    int dikdortgenUzunKenari;

    printf("karenin bir kenarini gir \n");
    scanf("%d",&kareninBirKenari);
    printf("karenin alani %d \n",kareninBirKenari*kareninBirKenari);

    /*printf("dikdortgenin kisa kenarini gir \n");
    scanf("%d",&dikdortgenKisaKenari);
    printf("dikdortgenin uzun kenarini gir \n");
    scanf("%d",&dikdortgenUzunKenari);*/
    printf("dikdortgenin kisa ve uzun kenarini gir \n");
    scanf("%d%d",&dikdortgenKisaKenari,&dikdortgenUzunKenari);

    int dikdortgeninAlani=dikdortgenKisaKenari*dikdortgenUzunKenari;

    printf("dikdortgenin alani %d \n",dikdortgeninAlani);

    return 0;
}
