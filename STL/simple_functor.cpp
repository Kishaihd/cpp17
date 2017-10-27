#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

template <class T>
class Printer {
  public:
    void operator() (const T& element) {
      std::cout << element << "\t";
    }
};

int main() {
  std::vector<int> v = {1, 2, 10, 20, 100, 1000, -59};

  std::cout << "Print the vector entries using Functor" << std::endl;

  for_each (v.begin(), v.end(), Printer<int>() );

  std::cout << std::endl;

  return 0;
}
