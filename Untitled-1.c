#include <stdio.h>
#include <stdlib.h>

int c_selection = 0;
int c_bubble = 0;
int c_insertion = 0;
int c_merge = 0;
int c_quick = 0;

void selection_sort(int *a, long int size)
{
    c_selection++;
    long int temp, i, j;
    for (i = 0; i < size; i++)
    {
        c_selection++;
        for (j = i + 1; j < size; j++)
        {
            c_selection++;
            c_selection++;
            if (a[i] > a[j])
            {
                c_selection = c_selection + 3;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        c_selection++;
    }
    c_selection++;
}

void bubblesort(int *a, long int n)
{
    c_bubble++;
    long int pass, i, swap_flag, t;

    for (pass = 0; pass < n - 1; pass++)
    {
        c_bubble++;
        c_bubble++;
        swap_flag = 0;

        for (i = 0; i < n - 1 - pass; i++)
        {
            c_bubble++;
            c_bubble++;
            if (a[i] > a[i + 1])
            {
                c_bubble++;
                t = a[i];
                c_bubble++;
                a[i] = a[i + 1];
                c_bubble++;
                a[i + 1] = t;
                c_bubble++;
                swap_flag = 1;
            }
        }
        c_bubble++;

        c_bubble++;
        if (swap_flag == 0)
        {
            c_bubble++;
            return;
        }
    }
    c_bubble++;
    c_bubble++;
    return;
}
void insertionsort(int *a, long int n)
{
    c_insertion++;
    long int i, j, key;
    for (i = 1; i < n; i++)
    {
        c_insertion++;
        c_insertion = c_insertion + 2;
        key = a[i];
        j = i - 1;

        while (key < a[j] && j >= 0)
        {
            c_insertion++;
            c_insertion = c_insertion + 2;
            a[j + 1] = a[j];
            j = j - 1;
        }
        c_insertion++;

        c_insertion++;
        a[j + 1] = key;
    }
    c_insertion++;

    c_insertion++;
    return;
}

void merge(int *a, long int low, long int mid, long int high)
{
    c_merge = c_merge + 5;
    int temp[5000];
    long int i, j, k;
    k = low;
    j = mid + 1;
    i = low;

    while ((k <= mid) && (j <= high))
    {
        c_merge++;
        c_merge++;
        if (a[k] <= a[j])
        {
            c_merge = c_merge + 2;
            temp[i] = a[k];
            k++;
        }
        else
        {
            c_merge++;
            c_merge = c_merge + 2;
            temp[i] = a[j];
            j++;
        }
        c_merge++;
        i++;
    }
    c_merge++;

    c_merge++;
    if (k <= mid)
    {
        for (; k <= mid; k++)
        {
            c_merge++;
            temp[i++] = a[k];
        }
        c_merge++;
    }
    else
    {
        for (; j <= high; j++)
        {
            c_merge++;
            temp[i++] = a[j];
        }
        c_merge++;
    }
    c_merge++;

    for (i = low; i <= high; i++)
    {
        c_merge++;
        a[i] = temp[i];
    }
    c_merge++;
}

void merge_sort(int *a, long int low, long int high) // call this function from main
{
    c_merge++;
    if (low != high)
    {
        c_merge = c_merge + 4;
        long int mid = (low + high) / 2;
        merge_sort(a, low, mid);
        merge_sort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}

int quicksort(int *q, long int lb, long int ub)
{
    c_quick++;

    int flag = 1;
    c_quick++;
    long int i = 0, j, key, t1, t2;

    c_quick++;
    if (lb < ub)
    {
        c_quick = c_quick + 3;
        i = lb;
        j = ub + 1;
        key = q[lb];

        while (flag == 1)
        {
            c_quick++;

            c_quick++;
            i++;
            while (q[i] < key)
            {
                c_quick++;

                c_quick++;
                i++;
            }
            c_quick++;

            c_quick++;
            j--;

            while (q[j] > key)
            {
                j--;
                c_quick++;
            }
            c_quick++;

            c_quick++;
            if (i < j)
            {
                c_quick = c_quick + 3;
                t1 = q[i];
                q[i] = q[j];
                q[j] = t1;
            }
            else
            {
                c_quick++;
                flag = 0;
            }
        }
        c_quick++;

        c_quick = c_quick + 3;
        t2 = q[lb];
        q[lb] = q[j];
        q[j] = t2;
        c_quick++;
        quicksort(q, lb, j - 1);
        c_quick++;
        quicksort(q, j + 1, ub);
    }
    c_quick++;
    return 0;
}

int main()
{
    int n = 500;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % n;
    }

    // selection_sort(arr,n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    quicksort(arr, 0, n);
    printf("%d \n", c_quick);
    return 0;
}
