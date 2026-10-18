#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

// Get length of character array
int getLength(char arr[], int size)
{
    int length = 0;
    int index = 0;

    while (arr[index] != '\0')
    {
        length++;
        index++;
    }

    return length;
}

// Replace spaces with 'X'
void replaceByX(char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == ' ')
        {
            arr[i] = 'X';
        }
    }
}

// Convert lowercase characters to uppercase
void convertLCToUC(char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            arr[i] = arr[i] - 'a' + 'A';
        }
    }
}

// Convert uppercase characters to lowercase
void convertUCToLC(char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= 'A' && arr[i] <= 'Z')
        {
            arr[i] = arr[i] - 'A' + 'a';
        }
    }
}

// Reverse character array
void reverseCharArray(char arr[], int size)
{
    int s = 0;
    int e = strlen(arr) - 1;

    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

// Check whether character array is palindrome
bool checkPalindrome(char arr[], int size)
{
    int s = 0;
    int e = strlen(arr) - 1;

    while (s <= e)
    {
        if (arr[s] != arr[e])
        {
            return false;
        }

        s++;
        e--;
    }

    return true;
}

string toLowerCase(string &s)
{

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] - 'A' + 'a';
        }
    }
    return s;
}
bool isAlnum(char &ch)
{
    if (ch >= '0' && ch <= '9')
        return true;
    if (ch >= 'a' && ch <= 'z')
        return true;
    if (ch >= 'A' && ch <= 'Z')
        return true;
    return false;
}

// Helper to create the normalized string
string normalizeString(string &s)
{
    string newStr = "";
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (isAlnum(ch))
        {
            // Convert uppercase to lowercase
            if (ch >= 'A' && ch <= 'Z')
            {
                ch = ch - 'A' + 'a';
            }
            newStr.push_back(ch);
        }
    }
    // CRITICAL FIX: Return the processed string, not the original
    return newStr;
}

bool isPalindrome(string s)
{
    string str = normalizeString(s);
    int i = 0;
    int j = str.length() - 1;

    // Standard two-pointer loop
    while (i < j)
    {
        if (str[i] != str[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

void checkPopBack(string &s)
{

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[s.length() - 1];
        cout << ch << " ";
        s.pop_back();
    }
}
string n_popBack(string &s, int n)
{
    // for( int i = 0 ; i < s.length() ; i++){

    // }
    string newStr = s;
    int dcr = n;
    char a = s.back();
    while (dcr != 0 && a == newStr.back())
    {
        newStr.pop_back();
        dcr--;
    }
    return newStr;
}

string removeDuplicate2(string &s, int n)
{

    string newStr = "";

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (newStr.empty())
        {
            newStr.push_back(ch);
        }
        else if (newStr.length() >= n && newStr.back() == s[i] && newStr[newStr.length() - n] == s[i])
        {
            newStr.push_back(ch);
            int dcr = n;
            char a = s.back();
            while (dcr != 0)
            {
                newStr.pop_back();
                dcr--;
            }
        }
        else if (newStr.length() < n && newStr.back() == s[i])
        {
            newStr.push_back(ch);
            for (int j = n - 1; j > 0; j--)
            {
                if (newStr.length() - j >= 0 && newStr[newStr.length() - j] == s[i])
                {
                    newStr.pop_back();
                }
                else
                {
                    break;
                }
            }
        }
        else
        {
            newStr.push_back(ch);
        }
    }
    return newStr;
}

string removeDuplicates(string &s, int k)
{
    string newStr = "";

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        newStr.push_back(ch);

        if (newStr.length() >= k)
        {
            bool flag = true;

            for (int j = k - 1; j > 0; j--)
            {
                if (newStr[newStr.length() - j-1] == ch)
                {
                }
                else
                {
                    flag = false;
                    break;
                }
            }

            if (flag)
            {
                int dcr = k;

                while (dcr != 0)
                {
                    newStr.pop_back();
                    dcr--;
                }
            }
        }
    }
    return newStr;
}

int main()
{

    // string s = "nfshp2mw";
    // cout << s << endl;
    // cout<<isPalindrome(s)<<endl;
    // cout << s;

    // checkPopBack(s);
    // string ss="";
    // cout<<ss.length()-1;

    // string s = "deeeeee";
    // cout << s << endl;
    // string ans = n_popBack(s, 3);
    // cout << ans << endl;

    // string s = "deeedbbcccbdaa";
    // cout << s << endl;
    // string ans = removeDuplicates(s, 3);
    // cout << ans << endl;
    string s = "deeedbbcccbdaa";
    string ans = removeDuplicates(s, 3);
    cout << ans;
    return 0;
}