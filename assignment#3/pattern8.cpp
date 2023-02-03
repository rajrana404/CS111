#include <iostream>
using namespace std;
int main() {
    int n;
    cout << " Enter the height: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(j == n/2 && i == n/2) cout << "*";
            else if(j == i ) cout << "+";
            else if(j == n-i-1) cout << "x";
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}