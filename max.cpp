#include <iostream>

using namespace std;

template<typename T>
inline T const& Max(T const& a, T const& b) {
  return a < b ? b : a;
}


int main() {

  int i = 10;
  int j = 20;
  cout << "Max(10, 20): " << Max(i, j) << endl;

  float a = 10.5;
  float b = 20.5;
  cout << "Max(10.5, 20.5): " << Max(a, b) << endl;

  string first = "First";
  string second = "Second";
  cout << "Max('First', 'Second'): " << Max(first, second) << endl;
  
  return 0;
}
