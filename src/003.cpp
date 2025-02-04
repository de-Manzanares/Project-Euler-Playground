#include <cmath>
#include <iostream>

// 600851475143

int main() {
  double i{2};
  double number = 600'851'475'143;

  while (number > 1) {
    while (std::fmod(number, i) == 0) {
      number /= i;
    }
    ++i;
  }

  std::cout << i - 1;
}
