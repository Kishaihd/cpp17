/*
 * Can use inline variable definitions.
 * Comes in handy to initialize static variables.
 */

#include <iostream>

class MyClass {
  private:
    static inline int count = 0;
  public:
    MyClass() {
      ++count;
    }

  public:
    void printCount() {
      std::cout << "Count value is: " << count << std::endl;
    }
};

int main() {
  MyClass obj;

  obj.printCount();

  return 0;
}
