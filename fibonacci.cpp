/** 
* Spring 2023 - Lab 02
* Last name: Cataluna
* First name: Kert Harvey
* GitHub username: kertharv
* Instructor: Genady Maryash
* Recitation Instructor: Prof. Zamansky
* Asssignment: Lab 2D
* A program fibonacci.cpp, which uses an array 
* of ints to compute and print all Fibonacci numbers from F(0) to F(59).
*/

#include <iostream>

/* From what I have observed on the values printed on the screen,
the values approaching the two billions, there is one particular
interesting thing that is transpiring. There are negative numbers mixed in
with positive numbers. I think it might be the result of using int functions
because fibonacci values goes beyond what int functions holds. Int
functions hold 2,147,483,647. Thus, an integer overflow occurs, which 
means the fibonacci values are greater the maximum value the data type can hold.
*/

int main()
{
    int fib[60];
    fib[0] = 0;
    fib[1] = 1;

    int i;
    for (i = 0; i < 60; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
        std::cout << fib[i] << std::endl;
    }

    return 0;
}