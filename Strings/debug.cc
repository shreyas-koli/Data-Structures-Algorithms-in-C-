#include <iostream>
#include <string>
using namespace std;

int main()
{
    std::string str = "Hello World";
    int indexToRemove = 6; // Index of the character to remove
    cout<<"BeforeLength"<<str.length();
    // if (indexToRemove >= 0 && indexToRemove < str.size())
    // {
        str.erase(indexToRemove, 1); // Remove 1 character at the given index
        // }
        std::cout << "Modified string: " << str << std::endl;
        cout<<"BeforeLength"<<str.length();
    return 0;
}
