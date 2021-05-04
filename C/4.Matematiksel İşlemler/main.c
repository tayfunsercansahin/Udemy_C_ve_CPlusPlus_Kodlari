#include <stdio.h>
#include <stdlib.h>

int main(){
    // Topla   sayi++   sayi+=1   sayi=sayi+1
    // Çýkar   sayi--   sayi-=1   sayi=sayi-1
    // Çarp             sayi*=5   sayi=sayi*5
    // Böl              sayi/=5   sayi=sayi/5
    // Mod              sayi%=6   sayi=sayi%6
    int sayi1=4;
    int sayi2=sayi1++; // sayi2=4 sayi1=5
    int sayi3=++sayi1; // sayi3=6 sayi1=6
    printf("%d %d %d",sayi1,sayi2,sayi3);

    return 0;
}
