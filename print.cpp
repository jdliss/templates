#include <iostream>
#include <string>

using namespace std;

template<typename Input>
void print(Input in) { cout << in << endl; };

int main() {
  print("Hello, World!");
  return 0;
}
