#include <iostream>
using namespace std;

int main() {
  int n1, n2, n3, n4, n5;
  int large, small;
  cout << "Enter five integers: ";
  cin >> n1 >> n2 >> n3 >> n4 >> n5;

  large = n1;

  if ( n2 > large ){
    large = n2;
  }
  if ( n3 > large ){
    large = n3;
  }
  if ( n4 > large ){
    large = n4;
  }
  if ( n5 > large ){
    large = n5;
  }

  cout << "Largest is " << large << endl;

  small = n1;

  if ( n2 < small ){
    small = n2;
  }
  if ( n3 < small ){
    small = n3;
  }
  if ( n4 < small ){
    small = n4;
  }
  if ( n5 < small ){
    small = n5;
  }

  cout << "Smallest is " << small << endl;

  return 0;
  
}