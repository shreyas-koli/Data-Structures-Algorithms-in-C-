#include <iostream>
using namespace std;

string removeOccurrences(string s, string part)
{
    // Logic to be implemented by the user

    string newStr = "";
    int k = part.length();

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        newStr.push_back(ch);

        if (newStr.length() >= k)
        {
            bool flag = true;

            for (int j = k - 1, c = 0; j >= 0 , c < k; j--,c++)

            {

                int a = newStr.length() - 1;
                // int b = k - 1;
                if (newStr[a-c] == part[j])
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
                int dcr = k - 1;
                while (dcr != -1)
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

    string str = "axxxxyyyyb";
    string part = "xy";
    cout<<"input: "<<str<<endl;
    string ans;
    ans = removeOccurrences(str, part);
    cout<<"Answer: "<<ans<<endl;



    return 0;
}