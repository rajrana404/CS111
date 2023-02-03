#include <iostream>
using namespace std;

int cutAfter7(int x) {
int ans;
if (x <= 0) return x;
ans = cutAfter7(x/10);
if ((ans % 10) == 7) return ans;
return x;
}


int main() {
int n;

cout<<"Enter a number: ";
cin>>n;

cout<< cutAfter7(n)<<endl;

return 0;
}

