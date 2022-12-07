
#include <stdio.h>

int kactanevar(int deger, int dizi1[]) // GİRİLEN DEĞERİN DİZİDE KAÇ TANE OLDUĞUNU GÖSTEREN FONKSİYON
{

    int i;
    int sayac = 0;

    for (i = 0; i < 5; i++)
    {

        if (deger == dizi1[i])
        {

            sayac++;
        }
    }
    return sayac;
}

int main()
{

    int dizi[] = {3, 4, 5, 6, 5};
    int deger2;

    printf("Hangi degerin kac kez gectigini ogrenmek istiyorsunuz? :  ");
    scanf("%d", &deger2);

    printf("Girdiginiz deger dizide %d kere geciyor.\n", kactanevar(deger2, dizi));

    return 0;
}

