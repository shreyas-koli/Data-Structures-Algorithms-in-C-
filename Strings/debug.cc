#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int findMin(vector<int> arr)
{
    int minimum = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        minimum = min(minimum, arr[i]);
    }

    return minimum;
}

void check(vector<string> &s)
{

    // string oriStr = s;
    vector<int> minList;
    for (int i = 0; i < s.size(); i++)
    {

        cout << "Index: " << i
             << " | Element: " << s[i]
             << " | Length: " << s[i].length()
             << endl;
        int eachWordLen = s[i].length();
        minList.push_back(eachWordLen);
    }
    cout << "Printing MinList" << endl;
    for (int i = 0; i < minList.size(); i++)
    {
        cout << minList[i] << endl;
    }

    // findMinimum in minList;
    int minLenWord = findMin(minList);
    cout << "Printing the Min value" << endl;
    cout << minLenWord << endl;

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
    cout << "Printing the mapping" << endl;
    
    for ( auto x: mp){
        cout<<x.first<<" -> "<<x.second<<endl;
    }
    cout<<"printing the minimum one"<<endl;

    cout<<mp[minLenWord];
}

int main()
{
    vector<string> oriStr = {"preach", "prevent", "prepare","prepe"};
    check(oriStr);

    // std::string str = "Hello World";
    // int indexToRemove = 6; // Index of the character to remove
    // cout<<"BeforeLength"<<str.length();
    // // if (indexToRemove >= 0 && indexToRemove < str.size())
    // // {
    //     str.erase(indexToRemove, 1); // Remove 1 character at the given index
    //     // }
    //     std::cout << "Modified string: " << str << std::endl;
    //     cout<<"BeforeLength"<<str.length();

    // for longest common prefix

    return 0;
}
