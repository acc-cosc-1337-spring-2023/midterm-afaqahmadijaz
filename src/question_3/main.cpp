#include <iostream>
#include <vector>
#include "question3.cpp"

int main() {
    int cookies;
    std::vector<double> ingredients;
    char choice;
    do {
    std::cout << "Enter the number of cookies to bake: ";
    std::cin >> cookies;

    while (std::cin.fail() || cookies <= 0) {
        std::cin.clear();
        std::cin.ignore(100, '\n');
        std::cout << "Invalid input. Enter a positive integer: ";
        std::cin >> cookies;
    }

    std::vector<double> ingredients = get_cookie_ingredients(cookies);

    std::cout << "Cups of Sugar: " << ingredients[0] << std::endl;
    std::cout << "Cups of Butter: " << ingredients[1] << std::endl;
    std::cout << "Cups of Flour: " << ingredients[2] << std::endl;

    std::cout << "Do you want to bake more cookies? (Y/N): ";
    std::cin >> choice;
} while (toupper(choice) == 'Y');

    return 0;
}
