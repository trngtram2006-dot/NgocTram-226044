#include <stdio.h>
#include "lib.h"
int ham_UCLN(int a, int b)

{
    int min = a > b ? b : a;
    for (int i = min;i > 0;i--)
    {
        if ((a % i == 0 && b % i == 0) || i == 1)
        {
            return i;
        }
    }
    return 0;
}


//int ham_BCNN(int a, int b)
//{
//    int max = a > b ? a : b;
//    for (int i = max;i <= a * b;i++)
//    {
//        if (i % a == 0 && i % b == 0)
//        {
//            return i;
//        }
//    }
//    return 0;
//}
//
//char kiem_tra_so_nguyen_to(int n)
//{
//    if (n < 2)
//    {
//        return 0;
//    }
//
//    for (int i = 2; i < n; i++)
//    {
//        if (n % i == 0)
//        {
//            return 0;
//        }
//    }
//
//    return 1;
//}
//
//int str_len(char* str)
//{
//    int count = 0;
//    while (*str != 0)
//    {
//        count++;
//        str++;
//    }
//    return count;
//}
//
//
//int arr_sum(int* arr, int len);
//{
//    int sum = 0;
//    for(int i=0;i<len;i++)
//    {
//        sum += arr[i];
//    }
//    return sum;
//}
//
//void str_upper(char* str);
//{
//    while (*str != '\0')
//    {
//        if (*st >= 'a' && *str <= 'z')
//        {
//            *str -= 32;
//        }
//        str++;
//    }
//}

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void arr_sort(int* arr, int len)
{
    for (int i = 0;i < len;i++)
    {
        for (int j = i; j < len;j++)
        {
            if (arr[i] > arr[j])
            {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

void arr_print(int* arr, int len)
{
    printf("arr: {");
    for (int i = 0; i < len;i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("}\n");
}

