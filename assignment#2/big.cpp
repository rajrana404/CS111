#include <iostream>
using namespace std;

int main() {
  int input, big;

  cout << "Enter an integer with at least 2 digits: ";
  cin >> input;

if( input >= 10){
big = input % 10;
  while(input > 0) {
  int r = input % 10;
  if(big < r) {
  big = r;
}

  input= input/ 10;
}
  }
else{
  return 0; 
  }
  cout<<"Biggest Number: "<< big <<endl;

}


