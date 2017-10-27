/*
 * Structured binding allows initializing multiple variables with a return value.
 * 'auto' acts like 'var' in Dart. runtimeType is deduced automatically.
 */

#include <iostream>
#include <tuple>

int main() {
  std::tuple<std::string, int> student("Kaden", 24);
  auto [name, age] = student;

  std::cout << "\nName of the student is " << name << std::endl;
  std::cout << "\nAge of the student is " << age << std::endl;

  return 0;
}
