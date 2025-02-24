// https://projecteuler.net/problem=5

#include <iostream>
#include <limits>

int main() {
  for (int i = 20 * 19; i < INT_MAX; i += 2) {
    for (int j = 2; j < 21; ++j) {
      if (i % j != 0) {
        break;
      } else if (j == 20) {
        std::cout << i;
      }
    }
  }
}