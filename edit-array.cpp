/** 
* Spring 2023 - Lab 02
* Last name: Cataluna
* First name: Kert Harvey
* GitHub username: kertharv
* Instructor: Genady Maryash
* Recitation Instructor: Prof. Zamansky
* Asssignment: Lab 2C
* Asks the user to input two integers L and U 
* (representing the lower and upper limits of the interval), 
* and print out all integers in the range L ≤ i < U separated by spaces.
*/

#include <iostream>
#include "funcs.h"

int main()
{
    int myData[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        myData[i] = 1;
        std::cout << myData[i] << " ";
    }
    std::cout << std::endl;

    int index_input;
    int value_input;

    std::cout << "Enter an index: ";
    std::cin >> index_input;

    std::cout << "Enter a value: ";
    std::cin >> value_input;

    do
    {
        if (index_input >= 0 && index_input < 10)
        {

            myData[index_input] = value_input;
            std::cout << std::endl;

            int i;

            for (i= 0; i < 10; i++)
            {
                std::cout << myData[i] << " ";
            }
            std::cout << std::endl;

            std::cout << "Enter another index: ";
            std::cin >> index_input;

            std::cout << "Enter a brand new value: ";
            std::cin >> value_input;
        }

        else
        {
            std::cout << "Exiting array because index is outside the range." << std::endl;
        }

    }
    while (index_input >= 0 && index_input < 10);

    return 0;
}