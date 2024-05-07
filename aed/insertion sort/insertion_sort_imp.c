#include "insertion_sort.h"

void insertion_sort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int p = i - 1;

        while (p >= 0 && arr[p] > current)
        {
            arr[p + 1] = arr[p];
            p--;
        }

        arr[p + 1] = current;
    }
}