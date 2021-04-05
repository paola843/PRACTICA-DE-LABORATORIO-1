#include <iostream>
using namespace std;

int main ()
 {
   // Using one statement with two stream insertion operators.
   cout << "VX YZ" << endl;
   
   // using one statement with four stream insertion operator.
   cout << "VX" << " " << "YZ" << endl;
   
   // using two statements with one stream insertion operator each.
   cout << "VX ";
   cout << "YZ\n";
   
   return 0;
 }
