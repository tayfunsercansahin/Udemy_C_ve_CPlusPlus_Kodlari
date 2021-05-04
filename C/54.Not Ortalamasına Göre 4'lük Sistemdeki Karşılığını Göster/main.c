#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int notlamaSistemi(int ortalama){
    if(ortalama>=90){
        return 4;
    }else if(ortalama>=80){
        return 3;
    }else if(ortalama>=70){
        return 2;
    }else if(ortalama>=60){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    setlocale(LC_ALL,"Turkish");
    srand(time(NULL));

    for(int i=1;i<6;i++){
        int ortalama=100-(i*10)+rand()%10;
        printf("%d notunun 4'lük sistemdeki karþýlýðý: %d\n",ortalama,notlamaSistemi(ortalama));
    }
    return 0;
}
