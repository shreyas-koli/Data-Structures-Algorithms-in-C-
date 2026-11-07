#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int findMin(vector<int> &arr)
{
    int mn = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] < mn)
        {
            mn = arr[i];
        }
    }

    return mn;
}

void printSorted(vector<int>& nums)
{
    int n = nums.size();
    vector<bool> visited(n, false);

    for(int i = 0; i < n; i++)
    {
        int mn = INT_MAX;
        int minIndex = -1;

        for(int j = 0; j < n; j++)
        {
            if(!visited[j] && nums[j] < mn)
            {
                mn = nums[j];
                minIndex = j;
            }
        }

        if(minIndex != -1)
        {
            cout << mn << " ";
            visited[minIndex] = true;
        }
    }
}

int minMoves(vector<int> &nums)
{

    int n = nums.size();
    int mins = n - 1;

    int ct = 0, i = 0;
    while (ct != mins)
    {
        int mn = *min_element(nums.begin(), nums.end());
    }
}

int main()
{

    return 0;
}