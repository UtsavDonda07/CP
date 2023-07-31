#include <stdio.h>

void selection_sort(float *a, int *possition, long int size)
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
    int n;
    float total = 0;

    //  take data from  user

    printf("enter size of data ");
    scanf("%d", &n);

    int w[n];
    int p[n];
    float x[n];
    float pw[n];
    int possition[n];

    // set possition by index
    for (int i = 0; i < n; i++)
    {
        possition[i] = i;
    }

    for (int i = 0; i < n; i++)
    {
        printf("enter weight%d price%d: ", i + 1, i + 1);
        scanf("%d %d", &w[i], &p[i]);
        x[i] = 0;
    }

    // knapsack size
    int m;
    printf("enter size of knapsack: ");
    scanf("%d", &m);
    float remain = m * 1.0;

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
    selection_sort(pw, possition, n);
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
    for (int i = 0; i < n; i++)
    {
        if (remain >= w[possition[i]])
        {

            total = total + p[possition[i]];
            x[possition[i]] = 1;
            remain = remain - w[possition[i]];
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%f ", x[i]);
    }

    printf("\n %f", total);
}