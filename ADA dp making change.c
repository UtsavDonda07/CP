#include <stdio.h>
int main()
{
    int n;
    printf("enter no of denomination ");
    scanf("%d", &n);
    int d[n + 1], coin;
    d[0] = 0;
    for (int i = 0; i < n; i++)
    {
        printf("\nenter denomination value : %d\n", i + 1);
        scanf("%d", &d[i + 1]);
    }
    scanf("%d", &coin);

    int arr[n + 1][coin + 1];

    for (int i = 0; i <= coin; i++)
    {
        arr[0][i] = 0;
    }
    for (int i = 0; i <= n; i++)
    {
        arr[i][0] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= coin; j++)
        {

            if (i == 1 && j < d[i])
            {
                arr[i][j] = 0;
            }
            else if (i == 1)
            {
                arr[i][j] = 1 + (arr[1][(j - d[1])]);
            }
            else if (j < d[i])
            {
                arr[i][j] = arr[i - 1][j];
            }
            else
            {
                int min;
                if (arr[i - 1][j] < (1 + arr[i][j - d[i]]))
                {
                    min = arr[i - 1][j];
                }
                else
                {
                    min = 1 + arr[i][j - d[i]];
                }

                arr[i][j] = min;
            }
        }
    }
    for (int i = 0; i <= coin; i++)
    {
        printf("%d ", i);
    }

    printf("\n");
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= coin; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // coin find karvana baki  to be continued.....

    int x, y;
    x = n + 1;
    y = coin + 1;
    int ans[arr[x][y]];
    int i = 0, rem = 1;

    while (rem != 0)
    {
        if (arr[x][y] == arr[x - 1][y])
        {
            x--;
        }
        else
        {
            ans[i] = d[x];
            i++;
            rem = coin - d[x];
            y = rem;
        }
    }
    
    for (int i = 0; i < arr[x][y]; i++)
    {
        printf("...%d ", ans[i]);
    }

    return 0;
}