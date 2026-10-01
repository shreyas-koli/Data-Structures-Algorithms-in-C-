/*
Pattern
N = 4
1
21
321
4321
*/
#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        // int p;
        for (j = 0; j < n; j++)
        {
            if (i >= j)
            {
                // int a = i - j + 1;
                // cout << a;
                cout<<i+1-j;
                // cout<<"*";
            }
        }
        cout << endl;
    }
}