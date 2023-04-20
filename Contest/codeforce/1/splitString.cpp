#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string s = "This,is a string";
    std::string first_part, second_part;

    std::istringstream ss(s);
    std::getline(ss, first_part, ',');
    std::getline(ss, second_part);

    std::cout << "First part: " << first_part << std::endl;
    std::cout << "Second part: " << second_part << std::endl;

    return 0;
}
