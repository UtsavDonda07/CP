#include <stdio.h>
int possition[4] = {0, 1, 2, 3};

void selection_sort(float *a, long int size)
{

    long int i, j;
    float temp, ptemp;
    for (i = 0; i < size; i++)
    {

        for (j = i + 1; j < size; j++)
        {

            if (a[i] < a[j])
            {
                // swap(a[i],a[j])
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;

                //  swap(possition[i],possition[j])
                ptemp = possition[i];
                possition[i] = possition[j];
                possition[j] = ptemp;
            }
        }
    }
}

int main()
{
    int n = 4;
    int w[4] = {50, 40, 30, 20};
    int p[4] = {100, 120, 15, 20};
    int x[4] = {0, 0, 0, 0};
    float total = 0;
    // knapsack size
    int m = 100;
    float remain = m * 1.0;
    float pw[n];

    //   ratio
    for (int i = 0; i < n; i++)
    {
        pw[i] = (p[i] * 1.0) / w[i];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%f ", pw[i]);
    }
    //  ratio sort
    selection_sort(pw, n);
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%f ", pw[i]);
    }
    printf("\n");

    // posstion change
    for (int i = 0; i < n; i++)
    {
        printf("%d ", possition[i]);
    }
    printf("\n");

    //  weight and price
    for (int i = 0; i < n; i++)
    {
        printf("%d %d   ", w[possition[i]], p[possition[i]]);
    }

    // calculate total price
    for (int i = 0;; i++)
    {
        if (remain >= w[possition[i]])
        {
            total = total + p[possition[i]];
            remain = remain - w[possition[i]];
        }
        else if (remain != 0)
        {
            total = total + p[possition[i]] * remain / w[possition[i]];
            remain = 0;
        }
        else
        {
            break;
        }
    }
    printf("\n %f", total);
}