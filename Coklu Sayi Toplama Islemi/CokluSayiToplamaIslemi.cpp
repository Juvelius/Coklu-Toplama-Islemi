#include <Windows.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayimiktari, sayi, toplam=0;
    char karar;
    label:
    system("CLS");
    printf("Kac sayi ile islem yapacaksin?: ");
    scanf(" %d", &sayimiktari);
    for (int i = 0; i < sayimiktari; i++)
    {
        scanf(" %d",&sayi);
        toplam = toplam + sayi;
    }
    printf("Girdiginiz Sayilarin Toplami: %d\n",toplam);
    printf("Tekrar islem yapmak icin 'E' tuşuna basin. ");
    scanf(" %c", &karar);
    if (karar == 'E' || karar == 'e')
    {
        goto label;
    }
    else
    {
        return 0;
    }
    return 0;
}

