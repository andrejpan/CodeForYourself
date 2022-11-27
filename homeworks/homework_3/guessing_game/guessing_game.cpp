
#include <iostream>
#include <random>
#include <string>

// c++ -std=c++17 -o guessing_game guessing_game.cpp

int main() {
  std::cout << "Welcome to the GUESSING GAME!\nI will generate a number and you will guess it!\n "
               "Please provide the smallest number: "
            << std::endl;
  int min, max, guess;
  std::cin >> min;
  std::cout << "Please provide the largest number: " << std::endl;
  std::cin >> max;

  std::random_device random_device;
  std::mt19937 random_engine{random_device()};
  std::uniform_int_distribution distribution{min, max};
  int target = distribution(random_engine);
  std::cout << "I've generated a number. Try to guess it!" << std::endl;

  auto index = 0U;
  auto not_found = true;

  while (not_found) {
    std::cout << "Please provide the next guess: ";
    std::cin >> guess;
    index++;
    if (guess == target) {
      not_found = false;
      break;
    }
    if (guess < target) {
      std::cout << "Your number is too small. Try again!" << std::endl;
    } else {
      std::cout << "Your number is too big. Try again!" << std::endl;
    }
  }
  std::cout << "You've done it! You guessed the number " << guess << " in " << index << " guesses!"
            << std::endl;
  return 0;
}