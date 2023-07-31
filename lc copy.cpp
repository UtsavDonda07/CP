#include <bits/stdc++.h>
using namespace std;

int maxCount(vector<int> &banned, int n, int maxSum)
{

    vector<int> v;
    std::vector<int>::iterator it;
    int sum = 0, ans = 0;

    for (int i = 1; i <= n; i++)
    {
        it = find(banned.begin(), banned.end(), i);
        if (it != banned.end())
        {
            sum += i;
        }
        if (sum <= maxSum)
        {
            ans++;
        }
    }
    return ans;
}

bool checkVovel(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        return true;
    return false;
}

vector<int> vowelStrings(vector<string> &words, vector<vector<int>> &queries)
{
    vector<int> ans;
    vector<int> pre;
    int n = words.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        string str = words[i];
        if (checkVovel(str[0]) && checkVovel(str[str.length() - 1]))
        {
            count++;
        }
        pre.push_back(count);
    }

    for (int i = 0; i < pre.size(); i++)
    {
        cout << pre[i] << " ";
    }
    return ans;
}

int main()
{
    int n1, n2;
    cin >> n1;
    vector<int> nums1(n1);
    for (int i = 0; i < n1; i++)
    {
        cin >> nums1[i];
    }
    cin >> n2;
    vector<int> nums2(n2);
    for (int i = 0; i < n2; i++)
    {
        cin >> nums2[i];
    }

    cout << endl
         << findMedianSortedArrays(nums1, nums2) << endl;
    return 0;
}
