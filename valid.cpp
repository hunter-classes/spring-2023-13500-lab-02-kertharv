/** 
* Spring 2023 - Lab 02
* Last name: Cataluna
* First name: Kert Harvey
* GitHub username: kertharv
* Instructor: Genady Maryash
* Recitation Instructor: Prof. Zamansky
* Asssignment: Lab 2A
* Asks the user to input an integer in the range 0 < n < 100. 
* If the number is out of range, the program should keep asking to re-enter 
* until a valid number is input.
*/

#include <iostream>

int main()
{
    int value;

    std::cout << "Please enter an integer between 0 and 100: ";
    std::cin >> value;

    while (0 > value || value > 100 || value == 0 || value == 100)
    {
        std::cout << "Please enter a valid integer: ";
        std::cin >> value;
    }
    int value_squared;

    value_squared = value * value;
    std::cout << "\nInteger squared is: " << value_squared << std::endl;

    return 0;
}