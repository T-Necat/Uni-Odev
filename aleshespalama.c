#include <stdio.h>

int main() {
    
    
    int ales , yds , mezuniyet ;
     printf ("Ales puanınızı giriniz\n");
     scanf("%d", &ales);
     printf ("YDS puanınızı giriniz\n");
     scanf("%d", &yds);
    if (yds<70){
        printf("başvuru yapamazsınız\n");
        return 0;
    }
     printf ("Mezuniyet Ortalamsı puanınızı giriniz\n");
     scanf("%d", &mezuniyet);
    float go,als,yd, mzn; // go genel ortalama
    als= ales * 0.5;
    yd = yds  * 0.25;
    mzn = mezuniyet * 0.25;
    go= als+yd+mzn;
    
    if (go<60){
        printf("başvuru yapamazsınız\n");
    }
    else{
        printf("başvuru yapabilirsiniz\n");
    }
    
    
    
    
    
    
    
    
    