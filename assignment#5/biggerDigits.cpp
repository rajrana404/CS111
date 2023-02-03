#include <iostream>
using namespace std;

int biggerDigits(int x, int y) {
	if (x == 0 && y == 0)
		return 0;
	if (x % 10 > y % 10)
		return 10 * biggerDigits(x / 10, y / 10) + x % 10;
	else
		return 10 * biggerDigits(x / 10, y / 10) + y % 10;
}

int main() {
int one, two;

cout<<"Enter a number 1: ";
cin>>one;
cout<<"Enter a number 2: ";
cin>>two;

cout<< biggerDigits(one,two)<<endl;

return 0;
}

