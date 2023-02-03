#include <iostream>
using namespace std;
int main(){
  int input;

  cout << "Enter an 2 digit integer: ";
  cin >> input;

if( input >= 10 && input < 100 ){
  for(int i=1; i <= input; i++){
    if(input%i == 0){
      cout << i << endl;
    } } }

else{
  return main(); 
  }

}

