#include <iostream>
using namespace std;
int main() {
  int n;
  cout << " Enter the height: ";
  cin >> n;
for(int i=1;i<=n;i++)
{
  for(int k=1;k<=3;k++)
{
    for(int j=1;j<=i;j++)
    cout << "X";
    for(int j=i;j<n;j++)
    cout << " ";
}
cout << endl;
}
}


