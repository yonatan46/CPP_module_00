#include "head.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <string.h>
#include <iomanip> 

void change_case(std::string& input)
{
    int x = 0;
    while (input[x])
    {
       input[x] =  toupper(input[x]);
        x++;
    }
}

int main(void)
{
    PhoneBook book;


    // book.addUserInfo();
    // book.getContactInfo();
    std::string input;
    while (1)
    {
        std::cout << std::setw(50);
        std::cout << "WELCOME TO CRAPPY PHONE BOOK: " << std::endl;
        std::cout << "\tOPTIONS" << std::endl;
        std::cout << "--------------------------------------------------------" << std::endl;
        std::cout << "->ADD" << std::endl;
        std::cout << "->SEARCH" << std::endl;
        std::cout << "->EXIT" << std::endl;
        std::cout << "--------------------------------------------------------" << std::endl;
        std::cout << "INPUT: ";
        std::getline(std::cin, input);
        change_case(input);
        if(input == "" || input == "EXIT")
        {
            system("clear");
            std::cout << "Bye Bye" << std::endl;
            exit(1);
        }
        else if(input == "ADD")
        {
            system("clear");
            book.addUserInfo();
            // std::cout << "ADD" << std::endl;
        }
        else if(input == "SEARCH")
        {
            system("clear");
            book.getContactInfo();
            // std::cout << "SEARCH" << std::endl;
        }
        else
        {
            system("clear");
            std::cout << "\033[1;31mError: please try again\033[0m" << std::endl;
        }
        std::cin.ignore();
        input.clear();
    }
    
    return(1);
}