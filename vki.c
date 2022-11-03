
#include <stdio.h>
int main(){

float boy, kilo,sonuc;
    printf("Boyunuzu Metre Cinsinden Giriniz\n");
    scanf("%f" ,&boy);
    printf("Kilonuzu Giriniz\n");
    scanf("%f" ,&kilo);
    sonuc=  kilo/(boy*boy);
    if (sonuc<18.5)
        printf("İdeal kilonun altında");
    else if (sonuc>= 18.5 && sonuc<24.9){
        printf("İdeal kilo\n");}
    else if (sonuc>= 24.9 && sonuc<29.9){
        printf("İdeal kilonun üstünde\n");}
    else if ( sonuc>= 29.9 && sonuc<39.9 ){
        printf("İdeal kilonun çok üstünde (obez)\n");}
    else if ( sonuc>= 39.9 ){
        printf("İdeal kilonun çok üstünde (morbid obez)\n");}
    printf("%f\n" ,sonuc);
    
    
    
    return 0 ;
}