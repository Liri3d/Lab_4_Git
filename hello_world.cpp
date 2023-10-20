#include <iostream>

int
main()
{
  std::string name;
  std::cout << "Enter your name: "; // Prompt for name
  std::getline(std::cin, name);
  std::cout << "Hello world from @" << name << std::endl; // Print greeting
  return 0;
}