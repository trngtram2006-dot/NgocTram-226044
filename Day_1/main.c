#include <stdio.h>
#include "lib.h"

void main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (kiem_tra_so_nguyen_to(i) == 1)
        {
            printf("%d la so nguyen to.\n", i);
        }
    }

    printf("\n");

    int ucln1=ham_UCLN(12, 20);
    printf(" %d la UCLN.\n", ucln1);
    int ucln2 = ham_UCLN(30, 45);
    printf(" %d la UCLN.\n", ucln2);

    printf("\n");

    int bcln1 = ham_BCNN(3, 4);
    printf(" %d la BCNN.\n", bcln1);
    int bcln2 = ham_BCNN(30, 45);
    printf(" %d la BCNN.\n", bcln2);

   
        int arr[10] = { 3, 2, 5, 6, 5, 6, 2, 1, 12, 32 };

        int GTLN = arr[0];
        int GTNN = arr[0];
        int vi_tri_min = 0;
        int vi_tri_max = 0;

        for (int i = 0; i < 10; i++)
        {
            if (GTLN < arr[i])
            {
                GTLN = arr[i];
                vi_tri_max = i;
            }

            if (GTNN > arr[i])
            {
                GTNN = arr[i];
                vi_tri_min = i;
            }
        }

        printf("%d la GTLN, vi tri = %d.\n", GTLN, vi_tri_max);
        printf("%d la GTNN, vi tri = %d.\n", GTNN, vi_tri_min);


        int length = sizeof(arr); // sizeof(arr[0]);
        for (int j = 0;j < length;j++)
        {
            printf("j[%d]: %d\n", j,arr[j]);
        }
}