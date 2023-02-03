#include <iostream>
using namespace std;

int largestNumber(int a, int b, int c, int d, int e){
  int max = 0;
  if (max<a) max = a;
  if (max<b) max = b;
  if (max<c) max = c;  
  if (max<d) max = d;
  if (max<e) max = e;
  return max;
}


void Factors(int n){
  for (int i=1; i<=n; i++)
  {
    if (n%i==0) cout<<i<<endl;
  }
}


int main(){
int p, q, r, s, t;
cout<<"Enter 1st integer: ";
cin>>p;
cout<<"Enter 2nd integer: ";
cin>>q;
cout<<"Enter 3rd integer: ";
cin>>r;
cout<<"Enter 4th integer: ";
cin>>s;
cout<<"Enter 5th integer: ";
cin>>t;

int biggestNumber = largestNumber (p,q,r,s,t);
Factors(biggestNumber);
return 0;
}
