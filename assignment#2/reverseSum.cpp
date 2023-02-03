#include <iostream>
using namespace std;

int main() {
  int x, remainder, sum;

  cout << "Enter a positive integer: ";
  cin >> x;

if( x >= 0){
   while(x != 0){
    remainder = x % 10;
    x = x/10;
    sum = sum + remainder;
    cout << remainder << " ";  
  }
  cout << "sum to " << sum;
}


else{
  return 0; 
  }
}



