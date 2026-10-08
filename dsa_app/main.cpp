#include "dsa/vector.hpp"
#include <iostream>

int main(int, char**){
  dsa_core::Vector v1 = { 34 };
  std::cout << v1.get_a() << std::endl;
}
