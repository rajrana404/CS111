#include <iostream>
using namespace std;
int main() {
  int n;
  cout << " Enter the width: ";
  cin >> n;

for(int i = 0; i < n; i++) {
       for(int j = 0; j < n; j++) {
           if(j == i ) {
               cout << " ";
           } else {
               cout << "X";
           }
       }
       cout << endl;}

for(int i = 0; i < n-1; i++) {
       for(int j = 0; j < n; j++) {
           if(j == n-i-2 ) {
               cout << " ";
           } else {
               cout << "X";
           }
       }  
       cout << endl;
    }
   return 0;
}


