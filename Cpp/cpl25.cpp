/*
To overload the << operator in C++, you need to define a function 
that takes an ostream object and the object you want to output as 
arguments, and returns an ostream object. The function should be 
a friend function of the class that you want to overload the << 
operator for. Here is an example of how you can do this:
*/

#include <iostream>

class MyClass {
  int x;

public:
  MyClass(int x) : x(x) {}

  // Overload the << operator as a friend function
  friend std::ostream& operator<<(std::ostream& out, const MyClass& obj) {
    out << obj.x;
    return out;
  }
};

int main() {
  MyClass obj(42);
  std::cout << obj << std::endl;
  return 0;
}


/*
Note that the << operator is left-associative, which means that 
a << b << c is equivalent to (a << b) << c. Therefore, it is 
generally recommended to return a reference to the ostream object
from the << operator function, as shown above, so that you can
chain multiple << operators together.
*/
