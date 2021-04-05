#include <iostream>
using namespace std;

int main(){
  int n1, n2, n3;
  cout << "Input three different integers: ";
  cin >> n1 >> n2 >> n3;

  int sum = n1 + n2 + n3;
  int average = ( n1 + n2 + n3 ) / 3;
  int product = n1 * n2 *n3;
    
  cout << "Sum is " << sum << endl;
  cout << "Average is " << average << endl;
  cout << "Product is " << product << endl;

  

  if ( n1 > n2 && n1 > n3 ){
    if ( n2 > n3 ){
      cout << "Smallest is " << n3 << endl;
      cout << "Largest is " << n1 << endl;
    }
    else{
      cout << "Smallest is " << n2 << endl;
      cout << "Largest is " << n1 << endl;
    }
    
  }
  if ( n2 > n1 && n2 > n3 ){
    if ( n1 > n3 ){
      cout << "Smallest is " << n3 << endl;
      cout << "Largest is " << n2 << endl;
    }
    else{
      cout << "Smallest is " << n1 << endl;
      cout << "Largest is " << n2 << endl;
    }
  }
  if ( n3 > n1 && n3 > n2 ){
    if ( n1 > n2 ){
      cout << "Smallest is " << n2 << endl;
      cout << "Largest is " << n3 << endl;
    }
    else{
      cout << "Smallest is " << n1 << endl;
      cout << "Largest is " << n3 << endl;
    }
  }

  return 0;
}