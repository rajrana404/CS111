#include <iostream>
using namespace std;
int main(){
  int input;
  cout << "Enter an integer divisible by 10: ";
  cin >> input;
	if( input%10 == 0){
  	 int x = input / 10;
 	   for(int i=1; i <= x; i++){
   	    for(int j=1; j <= 10; j++){
    		 cout << "*";}
    		 cout << endl;
  } }

else{
  return 0; 
  }

}


