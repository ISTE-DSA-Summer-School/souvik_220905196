#include <iostream>

using namespace std;

void swp(int &x, int &y)
{
  int temp = x;
  x = y;
  y = temp;
}
 
int main()
{
  int x, y;
  cout << "Enter two numbers" ;
  cin >> x >> y;
  swp(x, y);
  cout << "After swapping: "  << x<< "  "  << y;
  
}