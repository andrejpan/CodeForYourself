#include <array>
#include <iostream>
#include <map>
#include <string>
#include <vector>

// c++ -std=c++17 -o fortune_teller fortune_teller.cpp
// clang-format -i homeworks/homework_2/fortune_teller/fortune_teller.cpp

int main() {
  std::cout << "Welcome to the fortune teller program!" << std::endl;
  std::cout << "Please enter your name:" << std::endl;
  std::string name{};  // Init empty
  std::cin >> name;
  std::cout << "Please enter the time of year when you were born:\n(pick from 'spring', 'summer', "
               "'autumn', 'winter')"
            << std::endl;
  std::string month{};  // Init empty
  std::cin >> month;
  std::cout << "Please enter an adjective:" << std::endl;
  std::vector<std::string> adjectives = {};
  std::string input{};  // Init empty
  std::cin >> input;
  adjectives.emplace_back(input);
  std::cout << "Please enter another adjective:" << std::endl;
  std::cin >> input;
  adjectives.emplace_back(input);

  const std::map<std::string, std::string> nouns{{"spring", "STL guru"},
                                                 {"summer", "C++ expert"},
                                                 {"autumn", "coding beast"},
                                                 {"winter", "software design hero"}};
  const std::array arr{"eats UB for breakfast",
                       "finds errors quicker than the compiler",
                       "is not afraid of C++ error messages"};

  std::cout << "\nHere is your description:" << std::endl;
  std::cout << name << ", the " << adjectives.at(name.size() % adjectives.size()) << " ";
  std::cout << nouns.at(month) << " that " << arr.at(name.size() % arr.size()) << std::endl;
  return 0;
}