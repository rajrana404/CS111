#include <iostream>
using namespace std;

int main() {
  int x;

  cout << "Enter a positive integer: ";
  cin >> x;

  if( x >= 0){
   while(x != 0){
    cout << x << endl;
    x = x/10;  
  }
  }

else{
  return main(); 
  }

}



