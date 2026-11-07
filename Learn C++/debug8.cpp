// /*
// Pattern
// N = 5
//   *
//  ***
// *****
//  ***
//   *
// */
#include <iostream>
using namespace std;

int main()
{
  int n = 7;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if ((i + j) >= n / 2 && ((n % 2 == 0) ? abs(j - i) <= (n - (n / 2 + 1)) : abs(j - i) <= n / 2) && ((n % 2 == 1) ? ((i + j) <= n + (n / 2 - 1)) : (i + j) <= n + (n / 2 - 2)))
      {
        cout << "*";
      }
      else
      {
        cout << " ";
      }
    }

    cout << endl;
  }
}

// // void printPatt(int n){
// //     int i=1;
// //     while(i<(n)){
// //         int gaps = n-2*i,k=1;
// //         if(i>(n)/2){
// //             int no = (n+1)/2;
// //             gaps = 2*(i%no);
// //         }
// //         while(k<=gaps/2){
// //             cout<<" ";
// //             k = k + 1;
// //         }
// //         int ch = n - 1 - gaps;
// //         while(ch>=1){
// //             cout<<"*";
// //             ch = ch - 1;
// //         }
// //         k = 1;
// //         while(k<=gaps/2){
// //             cout<<" ";
// //             k = k + 1;
// //         }
// //         cout<<"\n";
// //         i = i + 1;
// //     }
// }
