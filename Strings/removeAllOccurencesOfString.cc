#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

string removeOccurrences(string s, string part)
{
    // Logic to be implemented by the user

    string newStr = "";
    int k = part.length();

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        cout<<"ch(s(i)): "<<ch<<"\t";
        newStr.push_back(ch);

        if (newStr.length() >= k)
        {
            bool flag = true;

            int a = newStr.length() - 1;
            for (int j = k - 1; j >= 0; j--)
            {

                // int b = k - 1;
                if (newStr[a] == part[j])
                {
                    if(a<k){
                        break;
                    }
                    a--;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            if (flag == true)
            {
                int dcr = k - 1;
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
    string s = "daaabcbaabcbc";
    string ans = "";
    string part = "abc";
    cout << s << endl;
    ans = removeOccurrences(s, part);
    cout << ans << endl;

    return 0;
}