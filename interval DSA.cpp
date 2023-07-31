#include <bits/stdc++.h>
using namespace std;
void selection_sort(int *a, int *b, long int size)
{

    long int i, j;
    float temp, ptemp;
    for (i = 0; i < size; i++)
    {

        for (j = i + 1; j < size; j++)
        {

            if (a[i] > a[j])
            {
                // swap(a[i],a[j])
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;

                //  swap(b[i],b[j])
                ptemp = b[i];
                b[i] = b[j];
                b[j] = ptemp;
            }
        }
    }
}

int main()
{

    int arr[4][2] = {{6, 8}, {1, 9}, {2, 4}, {4, 7}};

    for (int i = 0; i < 4; i++)
    {
        // cout << arr[i][0] << " " << arr[i][1] << endl;
    }

    int a[4];
    int b[4];

    // for simplicity transfer into a and b array

    for (int i = 0; i < 4; i++)
    {
        a[i] = arr[i][0];
        b[i] = arr[i][1];
    }

    // sort array
    selection_sort(a, b, 4);
    int ans[4][2];
   
    for (int i = 1; i < 4; i++)
    {
        if (a[i] < b[i - 1])
        {
            ans[i - 1][0] = a[i - 1];
            ans[i - 1][1] = b[i];
        }
        else
        {
            ans[i - 1][0] = a[i];
            ans[i - 1][1] = b[i];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        cout << ans[i][0] << " " << ans[i][1] << endl;
    }
    return 0;
}