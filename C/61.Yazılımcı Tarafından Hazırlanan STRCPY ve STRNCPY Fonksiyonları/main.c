#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL,"Turkish");

    char mekan[20]="Eyfel Kulesi";
    char ulke[6];

   /* strcpy(ulke,mekan); // dizi kopyalama
    printf("Mekan dizisinin kopyasý: %s",ulke);*/

    strncpy(ulke,mekan,5); // dizi kopyala ama ilk 5 karakteri
    printf("Mekan dizisinin kopyasýnýn ilk 5 karakter: %s",ulke);
    printf("XX");
    return 0;
}
