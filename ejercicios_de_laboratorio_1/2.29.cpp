#include <iostream>
using namespace std;

int main()
{
  int n;

  cout << "Face length\t" << "\tSurface area\t" << "\tVolume\n";
  cout << "of cube (cm)\t" << "of cube (cm^2)\t" << "\tof cube(cm^3)\n";

  n = 0;
  cout << n << "\t\t\t\t" << n*n*6 << "\t\t\t\t\t" << n*n*n << endl;

  n = 1;
  cout << n << "\t\t\t\t" << n*n*6 << "\t\t\t\t\t" << n*n*n << endl;

  n = 2;
  cout << n << "\t\t\t\t" << n*n*6 << "\t\t\t\t\t" << n*n*n << endl;

  n = 3;
  cout << n << "\t\t\t\t" << n*n*6 << "\t\t\t\t\t" << n*n*n << endl;

  n = 4;
  cout << n << "\t\t\t\t" << n*n*6 << "\t\t\t\t\t" << n*n*n << endl;
 
 return 0;

}