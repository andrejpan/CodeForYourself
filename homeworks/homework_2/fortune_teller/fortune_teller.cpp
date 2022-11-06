#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <array>

int main() {

  std::cout << "Welcome to the fortune teller program!" << std::endl;
  std::cout << "Please enter your name:" << std::endl;
  std::string name{}; // Init empty
  std::cin >> name;
  std::cout << "Please enter the time of year when you were born:\n(pick from 'spring', 'summer', 'autumn', 'winter')" << std::endl;
  std::string month{}; // Init empty
  std::cin >> month;
  std::cout << "Please enter an adjective:" << std::endl;
  std::vector<std::string> adjectives = {};                
  std::string input{}; // Init empty
  std::cin >> input;
  adjectives.push_back(input);
  std::cout << "Please enter another adjective:" << std::endl;
  std::cin >> input;
  adjectives.push_back(input);

  const std::map<std::string, std::string> nouns{{"spring", "STL guru"}, {"summer", "C++ expert"}, {"autumn", "coding beast"}, {"winter", "software design hero"}};
  const std::array arr{"eats UB for breakfast", "finds errors quicker than the compiler", "is not afraid of C++ error messages"};
  
  std::cout << "\nHere is your description:" << std::endl;
  std::cout << name << ", the " << adjectives.at(name.size() % adjectives.size()) << " "; 
  std::cout << nouns.at(month) << " that " << arr.at(name.size() % arr.size()) << std::endl;
  return 0;
}