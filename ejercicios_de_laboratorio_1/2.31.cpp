#include <iostream>
using namespace std;

int main() {
  
  float v1, v2, v3 , v4, v5;
  
  cout << "Total miles driven per day: ";
  cin >> v1;
  cout << "Cost per gallon of gasoline: ";
  cin >> v2;
  cout << "Average miles per gallon: ";
  cin >> v3;
  cout << "Parking fees per day: ";
  cin >> v4;
  cout << "Tolls per day: ";
  cin >> v5;

  float cost = ( v1 / v3 ) * v2 + v4 + v5;
  cout << "Cost per day of driving to work: " << cost << "$" << endl;

  return 0;
  
}