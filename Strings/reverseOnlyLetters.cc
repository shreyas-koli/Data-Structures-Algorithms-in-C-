#include <iostream>
#include <vector>
using namespace std;

string reverseString(const string &s) {

        int j = s.length() - 1;
        string str = "";

        while (j >= 0) {
            // cout << s[j];
            // j--;
            str.push_back(s[j]);
            j--;
        }
        return str;
    }

    bool checkAlphanumeric(char &ch) {

        if ((ch > 64 && ch < 91) || (ch > 96 && ch < 123)) {
            return true;
        } else {
            return false;
        }
    }

    string extract(string &s) {
        string ans = "";
        for (int i = 0; i < s.length(); i++) {

            char ch = s[i];
            if (checkAlphanumeric(ch)) {
                ans.push_back(ch);
            }
        }
        return ans;
    }

    string reverseOnlyLetters(const string &s) {
        // Implement logic to reverse only the letters in `s`

        string str = s;
        vector<pair<int, bool>> arr(str.length());

        for (int i = 0; i < str.length(); i++) {
            char ch = str[i];
            if (checkAlphanumeric(ch)) {
                arr[i] = {i, true};
            } else {
                arr[i] = {i, false};
            }
        }
        string extractedString = extract(str);
        string reversed = reverseString(extractedString);

        int i = 0;
        int j = 0;
        while (i < str.length()) {
            if (arr[i].second == true) {
                str[i] = reversed[j];
                i++;
                j++;
            } else if (arr[i].second == false) {
                i++;
                // continue;
            }
        }
        return str;
    }

int main()
{

    
    string str = "a-bC-dEf-ghIj";
    string extracted = extract(str);
    cout << extracted<<endl;
    string reversed = reverseString(extracted);
    cout<<reversed<<endl;
    cout<<reverseOnlyLetters(str);    
    
    return 0;
}