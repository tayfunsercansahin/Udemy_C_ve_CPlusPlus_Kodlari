#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void isimleriListele(char isimListesi[][30],int boyut){
    for(int i=0;i<boyut;i++){
        printf("%s\n",isimListesi[i]);
    }
}

int main(){
    setlocale(LC_ALL,"Turkish");

    char isciIsimleri[5][30]={"Haydar","Burcu","Abdurrahman","Ayþe","Halil Ýbrahim Yavuz"};

    isimleriListele(isciIsimleri,5);

    return 0;
}
