#include <iostream>
using namespace std;


bool isPrime(int x){
  for (int i=2; i<x; i++){
  if (x%i==0) return false;
  }
  return true;
}


void printPrime(int s)
  {
    for (int i=1; i<=s; i++){
       if (isPrime(i))
       cout<<i<<" ";
      }
cout<<endl;
  }


int main(){
int x;
cout<<"Enter a number between 2 and 1000\n";
cin>>x;
if (x<2||x>1000) return 0;

printPrime(x);

return 0;
}
