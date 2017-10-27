#include <iostream>
#include <array>

int main() {
  std::array<int, 6> a = {1, 2, 5, 3, 4, 0};

  std::cout << "Size of array is: " << a.size() << std::endl;

  auto pos = a.begin();

  std::cout << std::endl;

  while (pos != a.end()) {
    std::cout << *pos++ << "\t";
  }

  std::cout << std::endl;

  return 0;
}
