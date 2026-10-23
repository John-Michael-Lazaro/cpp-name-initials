
#include <iostream>
#include <string>

int main()
{
    std::string firstName;
    std::string middleName;
    std::string lastName;

    std::cout << "Enter your First name: ";
    std::cin >> firstName;

    std::cout << "Enter your Middle name: ";
    std::cin >> middleName;

    std::cout << "Enter your Last name: ";
    std::cin >> lastName;

    std::cout << '\n';
    std::cout << "Your full name is: "
              << firstName << " "
              << middleName << " "
              << lastName << '\n';

    std::cout << '\n';

    // First letter (initial) printer
    std::cout << "First initial: " << firstName[0] << '\n';
    std::cout << "Middle initial: " << middleName[0] << '\n';
    std::cout << "Last initial: " << lastName[0] << '\n';

    return 0;
}
