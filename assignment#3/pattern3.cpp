#include <iostream>
using namespace std;
int main() {
  int input;
  cout << " Enter the height: ";
  cin >> input;

  if(input % 2 != 0){
    for(int i = 0; i <= input; i++){
      if(i <= (input/2)){
        for(int j = 0; j <= i  ; j++){
        cout << "X"; }
        }
      else{
    for(int k = 1; k <= input - i; k++){
     cout << "X"; }
    }

     cout << endl;
    }}
  else{
    for(int i = 0; i <= input; i++){
     if(i <= (input/2)-1){
      for(int j = 0; j <= i  ; j++){
      cout << "X"; }
      }
     else{
      for(int k = 1; k <= input - i; k++){
      cout << "X"; }
      }

      cout << endl;
      }
      }
return 0;
}


