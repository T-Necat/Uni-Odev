#include <stdio.h>

int a,b,c;
int main(){
    int a,b,c,i;

    printf("istediğiniz satır sayılı üçgeni giriniz\n");
    scanf("%d", &i);
    for (a=0 ; a < 2*i ; a++){
    if (a % 2 != 0){
        continue;
    }
    for ( b =2*i ; b > a + 1; b--)
    {
       printf(" ");
    }
    for ( c=0 ; c < a+1 ;c++ )
    {
       printf(" *");
    }
    printf("\n");
}


    return 0;
}
