#include <iostream>
using namespace std;

int main()
{
 char n;
 cout << "Enter a character: ";
 cin >> n;
 
 cout << static_cast<int>(n);
 
 return 0;

}