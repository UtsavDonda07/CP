#include <stdio.h>

void selection_sort(int *a, long int size)
{
    long int temp, i, j;
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void bubblesort(int *a, long int n)
{
    long int pass, i, swap_flag, t;
    for (pass = 0; pass < n - 1; pass++)
    {
        swap_flag = 0;
        for (i = 0; i < n - 1 - pass; i++)
        {
            if (a[i] > a[i + 1])
            {
                t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
                swap_flag = 1;
            }
        }
        if (swap_flag == 0)
            return;
    }
    return;
}

void insertionsort(int *a, long int n)
{
    long int i, j, key;
    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while (key < a[j] && j >= 0)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
    return;
}

void merge(int *a, long int low, long int mid, long int high)
{
    int temp[5000];
    long int i, j, k;
    k = low;
    j = mid + 1;
    i = low;
    while ((k <= mid) && (j <= high))
    {
        if (a[k] <= a[j])
        {
            temp[i] = a[k];
            k++;
        }
        else
        {
            temp[i] = a[j];
            j++;
        }
        i++;
    }
    if (k <= mid)
        for (; k <= mid; k++)
            temp[i++] = a[k];
    else
        for (; j <= high; j++)
            temp[i++] = a[j];
    for (i = low; i <= high; i++)
        a[i] = temp[i];
}
void merge_sort(int *a, long int low, long int high) // call this function from main
{
    if (low != high)
    {
        long int mid = (low + high) / 2;
        merge_sort(a, low, mid);
        merge_sort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}

// int quicksort(int *q, long int lb, long int ub)
// {
//     int flag = 1;
//     long int i = 0, j, key, t1, t2;
//     if (lb < ub)
//     {
//         i = lb;
//         j = ub + 1;
//         key = q[lb];

//         while (flag == 1)
//         {
//             i++;
//             while (q[i] < key)
//             {
//                 i++;
//             }
//             j--;

//             while (q[j] > key)
//                 j--;
//             if (i < j)
//             {
//                 t1 = q[i];
//                 q[i] = q[j];
//                 q[j] = t1;
//             }
//             else
//             {
//                 flag = 0;
//             }
//         }
//         t2 = q[lb];
//         q[lb] = q[j];
//         q[j] = t2;

//         quicksort(q, lb, j - 1);
//         quicksort(q, j + 1, ub);
//     }
//     return;
// }

int main()
{
    int arr[100];
      for (int i = 0; i < 100; i++)
        cout << rand()%500 << " ";
    return 0;
}