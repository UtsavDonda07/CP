#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool find_two_lists(const vector<int>& arr, int X, vector<int>& list1, vector<int>& list2) {
    int n = arr.size();
    if (n < 4) {
        return false;
    }

    vector<int> index(n);
    for (int i = 0; i < n; ++i) {
        index[i] = i;
    }

    sort(index.begin(), index.end(), [&](int i, int j) {
        return arr[i] < arr[j];
    });

    int sum1 = 0, sum2 = 0;
    list1.clear();
    list2.clear();
    int i = 0, j = n - 1;
    while (i < j - 1) {
        if (sum1 + arr[index[i]] <= X/2) {
            sum1 += arr[index[i]];
            list1.push_back(index[i]);
            ++i;
        } else {
            sum2 += arr[index[j]];
            list2.push_back(index[j]);
            --j;
        }
    }
    if (sum1 + arr[index[i]] > X/2 || sum2 + arr[index[i+1]] > X/2) {
        return false;
    }
    list1.push_back(index[i]);
    list2.push_back(index[i+1]);

    sort(list1.begin(), list1.end());
    sort(list2.begin(), list2.end());

    vector<bool> used(n, false);
    for (int i : list1) {
        if (used[i]) {
            return false;
        }
        used[i] = true;
    }
    for (int i : list2) {
        if (used[i]) {
            return false;
        }
        used[i] = true;
    }

    return true;
}

int main() {
    vector<int> arr = {2,2,2,3,1};
    int X = 5;
    vector<int> list1, list2;
    if (find_two_lists(arr, X, list1, list2)) {
        cout << "List 1: ";
        for (int i : list1) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "List 2: ";
        for (int i : list2) {
            cout << arr[i] << " ";
        }
        cout << endl;
    } else {
        cout << "No such two lists exist." << endl;
    }
    return 0;
}
