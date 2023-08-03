#include <iostream>
#include <random>

int main() {
  // generate a seed source for the random number engine
  std::random_device rand;
  // use the mersenne twister engine
  std::mt19937 generator(rand());

  int die;

  // prompt user for die to roll
  std::cout << "What die would you like to roll?";
  std::cin >> die;

  // use uniform int distribution to generate an in-bounds value
  std::uniform_int_distribution dist(1, die);

  // display result to user
  std::cout << "Result: " << dist << "\n";

  // return zero
  return 0;

}