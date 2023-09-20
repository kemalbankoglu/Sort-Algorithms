#include<stdlib.h>
#include<stdio.h>

int main()
{
    int n;
    int i,j;
    
    printf("lutfen kac tane sayi girilecegini giriniz\n");
    scanf("%d",&n);

    int tab[n]; 

    for(i=0;i<n;i++)
    {
        printf("%d. sayi = ",i+1);
        scanf("%d",&tab[i]);
    }

    printf("\nsayilarin siralanmadan onceki hali\n");

    for(i=0;i<n;i++)
    {
        printf("%d  ",tab[i]);
    }

    printf("\nsayilarin siralandiktan sonraki hali\n");

    int gecici = 0;
    for(i=1;i<n;i++)
    {
        j=i;
        while(j>0 && tab[j] > tab[j-1])
        {
            gecici = tab[j];
            tab[j] = tab[j-1];
            tab[j-1] = gecici;
            j--;
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d  ",tab[i]);
    }

    return 0;
}

