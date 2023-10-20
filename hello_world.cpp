#include <iostream>

int main() {
    std::string name;
    std::cout << "Enter your name: "; // Запросить имя
    std::getline(std::cin, name);
    std::cout << "Hello world from @" << name << std::endl; // Распечатать
    return 0;
}
