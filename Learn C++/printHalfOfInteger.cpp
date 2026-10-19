#include <iostream>
using namespace std;

double halfOfInteger(int num)
{
    // Write down your code here
    float num2 = (float)num / 2;
    return num2;
}

int main()
{

    float num;
    cout<<"Enter a number"<<endl;
    cin>>num;

    cout<<"Half of an Integer = "<<halfOfInteger(num);


    return 0;
}