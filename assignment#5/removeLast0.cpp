#include <iostream>
using namespace std;

void removeLast0(int numb) {
if (numb == 0) return;
if (numb% 10 == 0) cout << numb/10;
else {
removeLast0(numb/10);
cout << numb % 10;
}}


int main() {
int n;

cout<<"Enter a number: ";
cin>>n;

removeLast0(n); 
cout<<endl;

return 0;
}
