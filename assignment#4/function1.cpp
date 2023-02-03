#include <iostream>
using namespace std;


void pattern(int x) {
  for (int r=1; r<=x; r++) {
   for (int c =1 ; c<=x; c++) {
     if (c == r && r == (x/2)+1)
      cout<<"*";
     else{
         if (c == r) cout<< "+";
         if (c==x-r+1) cout<< "x";
         else cout<< " ";
         }}
    cout<< endl;
          }
return;
}


int main() {
int x;
cout<< "Enter the height:";
cin>> x;

pattern(x);


return 0;
}
