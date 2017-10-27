/*
 * Template auto-deduction for class templates
 */

#include <iostream>

template <typename T1, typename T2>
class MyClass {
  private:
    T1 t1;
    T2 t2;
  public:
    MyClass(T1 t1 = T1(), T2 t2 = T2() ) { 
      printSizeOfDataTypes();
    }

    void printSizeOfDataTypes() {
      std::cout << "Size of t1 is " << sizeof(t1) << " bytes." << std::endl;
      std::cout << "Size of t2 is " << sizeof(t2) << " bytes." << std::endl;
    }
};

int main() {
  // Until c++14
  std::cout << "obj1" << std::endl;
  MyClass<int, double> obj1;
  //obj1.printSizeOfDataTypes();

  std::cout << "\nobj2" << std::endl;
  // New c++17 syntax
  MyClass obj2(1, 10.56);

  return 0;
}




