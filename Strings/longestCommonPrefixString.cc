#include <iostream>
#include <vector>
#include <map>
using namespace std;

// pair<string, int> findMinAndElement(vector<string> str, vector<int> arr, int n)
// {
//     // pair<string, int> ans;
//     // int minimum = arr[0];

//     // int i = 1;
//     // while (i < n)
//     // {
//     //     if (arr[i] < minimum)
//     //     {
//     //         minimum = arr[i];
//     //         ans.first = str[i];
//     //         ans.second = i;
//     //     }
//     //     i++;
//     // }

//     // return {ans.first,i };
//     pair<int, string> ans;

//     for (int i = 0; i < str.size(); i++)
//     {

//         ans.first = i;
//         ans.second = str[i];
//     }
//     // INT-
//     pair<vector<int>, string> ar;

//     for (int i = 0; i < ar.second.length(); i++)
//     {
//         ar.first.push_back(ar.second[i]);
//     }
// }

// void substrLength(vector<string> &strs)
// {
//     for (int i = 0; i < strs.size(); i++)
//     {
//         cout << strs[i] << " " << strs[i].length() << endl;
//     }
// }

// 1. find the shortest string
// 2. store the shortest string shtstr
// 3. compare the shtstr with each strings in original string 's';
// 4. till it matches the each char ch with string's s[i] till then ans.push_back(ch) // only works when ctr == 0 as its initialised
// 5. then next string --> compare shtstr with again string in 's'
// 6. then ctr = 1 therefore till it matches the the each char ch with string's s[i]  then with tmpstr[i] == ans[i] //because you can't push back into ans as its contains the prefixstring already
// 7. if tmpstr[i] == ans[i] then ok go ahead continue
// 8. else exit and then next string in 's';
// 9. DONE

//  int i = 0;
//     string wordInString = str[i];
//     while (i < wordInString.length() && i < shtStr.length())
//     {
//         wordInString = str[i];

//         if (wordInString != shtStr)
//         {

//             char ch = wordInString[i];
//             if (ctr == false && wordInString[i] == shtStr[i])
//             {
//                 ans.push_back(ch);
//                 ctr = true;
//             }
//             else if (ctr && wordInString[i] == shtStr[i])
//             {
//                 ans.push_back(ch);
//             }
//         }

//         i++;
//     }

int findMin(vector<int> arr)
{
    int minimum = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        minimum = min(minimum, arr[i]);
    }

    return minimum;
}

string shortestString(vector<string> s)
{
    vector<int> minList;
    for (int i = 0; i < s.size(); i++)
    {
        int eachWordLen = s[i].length();
        minList.push_back(eachWordLen);
    }

    // findMinimum in minList;
    int minLenWord = findMin(minList);

    // stored in map<int, string>
    map<int, string> mp;
    for (int i = 0; i < s.size(); i++)
    {
        int len = s[i].length();

        if (mp.find(len) == mp.end())
        {
            mp[len] = s[i];
        }
    }

    string shtStr = mp[minLenWord];
    return shtStr;
}

string longestCommonPrefix(const vector<string> &strs)
{

    vector<string> str = strs;
    string shtStr = shortestString(str);
    // string visited;
    vector<string> anstr;
    // int ctr = 0;
    bool ctr = true;

    int i = 0;
    string ans = "";

    while (i < str.size())
    {
        ctr = true;
        ans = "";

        string wordInString = str[i];

        int j = 0;
        while (ctr && j < shtStr.length())
        {
            // if (shtStr != wordInString)
            // {
            char ch = wordInString[j];
            char sch = shtStr[j];
            // visited.push_back(sch);visited.length() == ans.length() &&
            if (ch == sch)
            {
                ans.push_back(sch);
            }
            else
            {
                // break;
                ctr = false;
            }
            j++;
            // }
        }
        anstr.push_back(ans);
        i++;
    }

    // anstr = ["flow", "flow", "fl"]
    string finalAns = shortestString(anstr);

    return finalAns;
}

int main()
{

    // vector<string> s = {"prefix", "preach", "prevent", "prepare"};
    // finding the substring length;

    // cout<<strs[0];
    // substrLength(strs);
    // substrLength(s);

    // vector<string> s = {"dog", "racecar", "car"};
    // vector<string> s = {"flower", "flow", "flight"};
    // vector<string> s = {"prevent", "prefix", "preserve", "preach"};
    // vector<string> s = {"interstellar", "intnet","international","intepl"};

    // vector<string> s = {"flower", "flow", "flight"};
    // Expected: "fl"

    // vector<string> s = {"dog", "racecar", "car"};
    // Expected: ""

    // vector<string> s = {"prevent", "prefix", "preserve", "preach"};
    // Expected: "pre"

    // vector<string> s = {"interstellar", "intnet", "international", "intepl"};
    // Expected: "int"

// vector<string> s = {"flow", "flower"};
// Expected: "flow"

// vector<string> s = {"flower", "flow"};
// Expected: "flow"

// vector<string> s = {"a", "ab", "abc", "abcd"};
// Expected: "a"

// vector<string> s = {"abcd", "abce", "abcf", "abcg"};
// // Expected: "abc"

// vector<string> s = {"abc", "xbc", "ybc", "zbc"};
// // Expected: ""

// vector<string> s = {"aaaa", "aaa", "aaaaa", "aa"};
// // Expected: "aa"

// vector<string> s = {"", "abc", "abcd"};
// Expected: ""

vector<string> s = {"computer", "compare", "compact", "company"};
// Expected: "com"

    // string shtStr = shortestString(s);
    // cout << shtStr << endl;
    string anstr = longestCommonPrefix(s);
    cout << anstr << endl;

    return 0;
}