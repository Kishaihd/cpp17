/*
 * std::invoke() can be used to call functions, function pointers, and member pointers with the same syntax.
 * std::invoke() is a template function that helps seamlessly invoke callable objects, both built-in and user-defined.
 */

#include <iostream>
#include <functional>


void globalFunction() {
  std::cout << "globalFunction..." << std::endl;
}

class MyClass {
  public:
    void memberFunction(int data) {
      std::cout << "\nMyClass memberFunction..." << std::endl;
    }

    static void staticFunction(int data) {
      std::cout << "MyClass staticFunction..." << std::endl;
    }
};

int main() {
  MyClass obj;

  std::invoke(&MyClass::memberFunction, obj, 100);
  std::invoke(&MyClass::staticFunction, 200);
  std::invoke(globalFunction);

  return 0;
}


