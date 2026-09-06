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

    string reversed = reverseString(s);

    if (reversed == s)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool validPalindrome(string s)
{

    int i = s.length() - 2;
    int j = i + 1;
    string bkp = s;

    if (normalPalindrome(s))
    {
        return true;
    }
    string rm1 = s;
    rm1.erase(rm1.begin());
    if(normalPalindrome(rm1)){
        return true;
    }

    string rmL = s;
    // rmL.erase(rm1.end()-1);
    rmL.pop_back();
    if(normalPalindrome(rmL)){
        return true;
    }

    else
    {

        while (j >= 0)
        {

            if (i == 0)
            {
                i = s.length() - 1;
            }

            swap(s[i], s[j]);
            char ch = s[j];
            // s.pop_back();
            if( j >=0 && j < s.length()){

                s.erase(j,1);
            }

            if (normalPalindrome(s))
            {
                return true;
            }
            else
            {
                s = bkp;
            }

            i--;
            j--;
        }
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
    cout<<validPalindrome(s);


    return 0;
}