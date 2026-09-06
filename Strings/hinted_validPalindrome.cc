#include <iostream>
using namespace std;

string reverseString(string &s)
{

    int j = s.length() - 1;
    string str = "";

    while (j >= 0)
    {
        // cout << s[j];
        // j--;
        str.push_back(s[j]);
        j--;
    }
    return str;
}

bool normalPalindrome(string &s)
{
    int i = 0;
    int j = s.length() - 1;

    while (i < j)
    {
        if (s[i] != s[j])
            return false;

        i++;
        j--;
    }

    return true;
}
bool validPalindrome(string s)
{
    string bkp = s;

    if (normalPalindrome(s))
        return true;

    string rm1 = s;
    rm1.erase(rm1.begin());

    if (normalPalindrome(rm1))
        return true;

    string rmL = s;
    rmL.pop_back();

    if (normalPalindrome(rmL))
        return true;

    int j = s.length() - 1;

    while (j >= 0)
    {
        s.erase(j, 1);

        if (normalPalindrome(s))
            return true;

        s = bkp;
        j--;
    }

    return false;
}

int main()
{
    // string str = "racecar";
    // string ans = reverseString(str);
    // cout << ans << endl;

    // cout << normalPalindrome(str);

    // string str = "nfshp2";
    // cout << str << endl;
    // char ch = str[str.length() - 1];
    // str.pop_back();

    // cout << str << endl;

    // str = str + ch;
    // cout << str << endl;

    string s = "eccer";
    cout << validPalindrome(s);

    return 0;
}