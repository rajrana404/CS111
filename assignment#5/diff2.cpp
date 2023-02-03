#include <iostream>
using namespace std;

int diff2(int x) {
  if (x < 100){
    int ans = x / 10 - x % 10;
    if (ans < 0) ans = -ans;
    return ans;
    }
  return diff2( x / 10);
  }


int main() {
int n;

cout<<"Enter a number: ";
cin>>n;

cout<< diff2(n)<<endl;

return 0;
}

