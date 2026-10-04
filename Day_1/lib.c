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


int ham_BCNN(int a, int b)
{
    int max = a > b ? a : b;
    for (int i = max;i <= a * b;i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            return i;
        }
    }
    return 0;
}

char kiem_tra_so_nguyen_to(int n)
{
    if (n < 2)
    {
        return 0;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}