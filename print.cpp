#include <iostream>
#include <string>

using namespace std;

/* template print function which can take any type input */
template<typename Type>
void print(Type in) { cout << in << endl; };

int main() {

  /* strings */
  print("Hello, World!");
  string hello = "Hello, World!";
  print(hello);

  /* integers */
  print(5);

  /* floats */
  print(1.111234);

  /* chars */
  print('a');

  return 0;
}
