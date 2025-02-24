// https://projecteuler.net/problem=2

#include <iostream>

int main() {

  int i{0};
  int j{1};
  int k = i + j;
  int sum{};

  while (k < 4E6) {
    k = i + j;
    i = j;
    j = k;
    if (k % 2 == 0) {
      sum += k;
    }
  }

  std::cout << sum;
}
