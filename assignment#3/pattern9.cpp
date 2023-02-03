#include <iostream>
using namespace std;
int main() {
  int h, w;
  cout << " Enter the height: ";
  cin >> h;
  cout << " Enter the width: ";
  cin >> w;

for(int i = 1; i <= h; i++) {
       for(int j = 1; j <= w; j++) {
         if(i % 2 == 0 && j % 2 == 0) cout << "0";
        else cout << "*";
       }
       cout << endl;
   }
   return 0;
}
