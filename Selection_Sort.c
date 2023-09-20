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
    for(i=0;i<n-1;i++)
    {
        int konum = i;
        for(j=i+1;j<n;j++)
        {
            if(tab[konum]>tab[j])
            {
                konum = j;
            }
        }
        if(konum != i)
        {
            gecici = tab[i];
            tab[i] = tab[konum];
            tab[konum] = gecici;
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d  ",tab[i]);
    }

    return 0;
}

