#include "Helpers.h"

std::string ReadLine(std::string prompt)
{
    std::string line;

    while (line == "" || line == " ")
    {
        std::cout << prompt;
        std::getline(std::cin, line);
    }

    return line;
}