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

int main()
{
    // String operations

    string name = "shreyas";

    cout << name.front() << endl;
    cout << *(name.end() - 1) << endl;

    reverse(name.begin(), name.end());

    cout << name << endl;

    // String concatenation

    string firstname = "Shreyas";
    string lastname = "Jankoli";

    string fullname = firstname + " " + lastname;

    cout << fullname << endl;

    // String length

    cout << "Length: " << fullname.length() << endl;

    // Clear string

    fullname.clear();

    cout << "Length: " << fullname.length() << endl;

    // Check if string is empty

    if (fullname.empty())
    {
        cout << "String ki length 0 h" << endl;
    }
    else
    {
        cout << "String ki length non zero h" << endl;
    }

    return 0;
}