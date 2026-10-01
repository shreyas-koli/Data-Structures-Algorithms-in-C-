
/*
Pattern
1
23
345
4567
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"input n"<<endl;
    cin>>n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            if( i >= j ){
            cout<<i+j-1;
        
            }
            j = j+1;
        }
        cout << "\n";
        i = i + 1;
    }

    // for(int i = 0 ; i < n ; i++){
    //     for(int j = 0 ; j < n ; j++){

    //         if( i >= j ){
    //         cout<<i+j+1;

    //         }

    //     }cout<<endl;
    // }

}