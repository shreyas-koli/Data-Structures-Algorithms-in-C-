#include <iostream>
#include <vector>

using namespace std;

bool checkSorted(vector<int> &arr)
{

    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        { // Use >= if strictly increasing is required
            return false;
        }
    }
    return true;
}

int binarySearch(vector<int> &arr, int s, int e, int t)
{
    if (s > e)
    {
        return -1; // Target not found
    }

    int m = s + (e - s) / 2;

    if (arr[m] == t)
    {
        cout << "element: " << arr[m] << " -> ";
        return m;
    }
    else if (arr[m] < t)
    {
        return binarySearch(arr, m + 1, e, t);
    }
    else
    {
        return binarySearch(arr, s, m - 1, t);
    }
}

void digitPrint(int n)
{

    int d = n;
    if (d == 0)
    {
        return;
    }
    d = n / 10;
    n = n % 10;
    cout << n << endl;
    digitPrint(d);
}

void printAllSubsequences(string &str, int i, string ans)
{

    if (i >= str.length())
    {
        // ans.push_back(output);

        return;
    }

    char ch = str[i];
    // printAllSubsequences(str, i+1, ans, output+ch);
    // printAllSubsequences(str, i+1, ans, output);
}

int solveHouseRobber(vector<int> &arr, int i)
{

    if (i >= arr.size())
    {
        return 0;
    }

    int ans1 = arr[i] + solveHouseRobber(arr, i + 2);
    int ans2 = solveHouseRobber(arr, i + 1);
    int ans = max(ans1, ans2);
    return ans;
}

int houseRobber(vector<int> &nums)
{

    int i = 0;
    int ans = solveHouseRobber(nums, i);
    return ans;
}

int coinChange2(vector<int> &nums, int amt, int i)
{

    int n = nums.size();
    


}

int main()
{
    // vector<int> arr = {1, 3, 5, 7, 9};

    // if (!checkSorted(arr))
    // {
    //     cout << "Array is not sorted!" << endl;
    //     return 0;
    // }

    // int s = 0, e = arr.size() - 1, t = 3;

    // int ans = binarySearch(arr, s, e, t);
    // cout << ans << endl;

    // int n = 1234567890;
    // digitPrint(n);

    vector<int> arr = {6, 1, 2, 7, 3, 8};
    int ans = houseRobber(arr);
    cout << ans;

    return 0;
}