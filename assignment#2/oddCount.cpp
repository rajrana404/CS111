
#include <iostream>
using namespace std;
int main() {
 int num;
 int count = 0;
   for(int i = 0; i < 3; ++i) {
      cout << "Enter an integer between 1000 and 1000000: ";
      cin >> num;
     if(num >= 1000 && num <= 1000000) {
      while(num > 0) {
       if((num % 10) % 2 == 1) {
         count++;
       }
       num /= 10;
     }
   cout << count << " odd numbers" << endl;
   return 0;
   
}
      
    if(i == 2) {
     return 0;
      }}
    cout << "Invalid range. Try again!" << endl;
}

