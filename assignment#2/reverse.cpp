#include <iostream>
using namespace std;

int main() {
  int input, remainder;

  cout << "Enter an integer between 100 and 9999: ";
  cin >> input;

if( input >= 100 && input <= 9999){
  while(input != 0){
    remainder = input % 10;
    input = input/10;
    cout << remainder << endl;  
  }
 }

else{
  return main(); 
  }

}


