// https://projecteuler.net/problem=4

#include <iostream>
#include <string>

bool is_palindrome(int x);

int main() {
  int largest_found{};             
  std::pair<int, int> multiples{}; 

  for (int i = 100; i < 1000; ++i) {
    for (int j = 100; j < 1000; ++j) {
      if (is_palindrome(i * j)) {
        if (i * j > largest_found) {
          largest_found = i * j;
          multiples = {i, j};
        }
      }
    }
  }

  std::cout << multiples.first << '*' << multiples.second << '='
            << largest_found;
}

bool is_palindrome(int x) {
  std::string forwards = std::to_string(x); 
  std::string backwards{forwards.rbegin(), forwards.rend()};
  return forwards == backwards;
}

