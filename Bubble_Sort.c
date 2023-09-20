#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    int i,j;
    

    printf("lutfen girilecek sayi adedini giriniz\n");
    scanf("%d",&n);
    int dizi[n];

    printf("lutfen sayilari giriniz\n");
    for(i=0;i<n;i++)
    {
        printf("%d. sayi = ",i+1);
        scanf("%d",&dizi[i]);
    }

    printf("buyukten kucuge siralanmadan once\n");

    for(i=0;i<n;i++)
    {
        printf("%d  ",dizi[i]);
    }

    printf("\nbuyukten kucuge siralandiktan sonra\n");
    
    int gecici = 0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(dizi[j]>dizi[j+1])
            {
                gecici = dizi[j];
                dizi[j] = dizi[j+1];
                dizi[j+1] = gecici;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d  ",dizi[i]);
    }

}