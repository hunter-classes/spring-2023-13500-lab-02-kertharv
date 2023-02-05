/** 
* Spring 2023 - Lab 02
* Last name: Cataluna
* First name: Kert Harvey
* GitHub username: kertharv
* Instructor: Genady Maryash
* Recitation Instructor: Prof. Zamansky
* Asssignment: Lab 2B
* Asks the user to input two integers L and U 
* (representing the lower and upper limits of the interval), 
* and print out all integers in the range L ≤ i < U separated by spaces.
*/

#include <iostream>
#include "funcs.h"

int main()
{
    std::cout << "The numbers between 10 and 30 excluding 30 are: ";
    print_interval(10, 30);
    std::cout << std::endl;

    std::cout << "The numbers between 30 and 55 excluding 55 are: ";
    print_interval(30, 55);
    std::cout << std::endl;

    std::cout << "The numbers between 51 and 67 excluding 67 are: ";
    print_interval(51, 67);
    std::cout << std::endl;
    
    std::cout << "The numbers between 103 and 109 excluding 109 are: ";
    print_interval(103, 109);
    std::cout << std::endl;
}