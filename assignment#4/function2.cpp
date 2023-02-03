#include <iostream>
using namespace std;


void pattern(int h, int w){
  for (int r=1; r<=h; r++){
    for (int c =1 ; c<=w; c++) { 
       if (r % 2 == 1) cout<<"*";
       else{
              if (c%2==1) cout<< "*";
              if (c%2==0) cout<< "0";
            } }
  cout<<endl;
  }
return;
}


int main() {
int h, w;

cout<< "Enter the height:";
cin>> h;

cout<< "Enter the width:";
cin>>w;
pattern(h,w);


return 0;
}
