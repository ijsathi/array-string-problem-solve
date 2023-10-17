#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int a[100001], max = 100001, min = -100001;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] < max)
        {
            max = a[i];
        }
        if (a[i] > min)
        {
            min = a[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] == min)
        {
            a[i] = max;
        }
        else if (a[i] == max)
        {
            a[i] = min;
        }
        printf("%d ", a[i]);
    }

    return 0;
}