#include "quick_sort.h"

int __partition(int *arr, int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j < high; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            int t = arr[i];
            arr[i] = arr[j];
            arr[j] = t;
        }
    }

    int t = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = t;
    return (i + 1);
}

void __quickSort(int *arr, int low, int high)
{
    if (low < high)
    {
        int pi = __partition(arr, low, high);

        __quickSort(arr, low, pi - 1);
        __quickSort(arr, pi + 1, high);
    }
}

void quick_sort(int *arr, int n)
{
    __quickSort(arr, 0, n - 1);
}
