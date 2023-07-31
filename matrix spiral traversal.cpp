#include <bits/stdc++.h>
using namespace std;
/*
 1 2 3 4
 5 6 7 8
 9 1 2 3
 4 5 6 7
 */
int main()
{
    // int a[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    // int a[2][2]={{1,2},{3,4}};
    // int a[6][6]={{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18},{19,20,21,22,23,24},{25,26,27,28,29,30},{31,32,33,34,35,36}};

    // int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};  // last ele not print if we consider size/2 int

    // int a[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    // int a[2][3]={{1,2,3},{4,5,6}};
    // int a[5][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15}};

    int matrix[1][1] = {2};

    bool flag = false;
    int top = 0, down = r - 1, right = c - 1, left = 0;
    vector<int> ans;
    // int n = 4 * 2;
    for (int j = 0;; j++)
    {
        if (flag == true)
        {
            break;
        }

        else if (j % 4 == 0)
        {
            // side 1
            // cout << "side 1" << endl;
            flag = true;
            for (int i = left; i <= right; i++)
            {
                // cout << a[top][i] << " ";
                ans.push_back(matrix[top][i]);
                flag = false;
            }
            // cout << endl;
            top++;
        }
        else if (j % 4 == 1)
        {
            // side 2
            // cout << "side 2" << endl;
            flag = true;
            // cout << top << down << endl;

            for (int i = top; i <= down; i++)
            {
                // cout << a[i][right] << " ";
                ans.push_back(matrix[i][right]);
                flag = false;
            }
            // cout << endl;
            right--;
        }
        else if (j % 4 == 2)
        {
            // side 3
            // cout << "side 3" << endl;
            flag = true;
            for (int i = right; i >= left; i--)
            {
                // cout << a[down][i] << " ";
                ans.push_back(matrix[down][i]);
                flag = false;
            }
            // cout << endl;
            down--;
        }
        else
        {
            // cout << "side 4" << endl;
            // side 4
            flag = true;
            for (int i = down; i >= top; i--)
            {
                // cout << a[i][left] << " ";
                ans.push_back(matrix[i][left]);
                flag = false;
            }
            // cout << endl;
            left++;
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}