#include <iostream>
using namespace std;
int main() {
  int input;
  cout << " Enter the height for the triangle: ";
  cin >> input;

    for(int i = 1; i <= input; i++){
     for(int j = 1; j <= i; j++){
      cout << "*";
     }
      cout << endl;
     }
return 0;
}


