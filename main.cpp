/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonamog2 <yonamog2@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:18:33 by yonamog2          #+#    #+#             */
/*   Updated: 2023/03/10 14:44:23 by yonamog2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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
    int cnt = 0;
    while (1)
    {
        std::cout << "\n" << std::setw(50);
        std::cout << "WELCOME TO CRAPPY PHONE BOOK ☎️\n" << std::endl;
        std::cout << "\tOPTIONS ☎" << std::endl;
        std::cout << "--------------------------------------------------------" << std::endl;
        std::cout << "->ADD 📲" << std::endl;
        std::cout << "->SEARCH ⌕" << std::endl;
        std::cout << "->EXIT ✆" << std::endl;
        std::cout << "--------------------------------------------------------" << std::endl;
        std::cout << "INPUT: ";
        input.clear();
        std::getline(std::cin, input);
        if(std::cin.eof() || std::cin.bad() || input == "EXIT")
        {
            system("clear");
            std::cout << "\t\033[1;31m---------------------------------" << std::endl;
            std::cout << "\t|\t👋Bye Bye👋\t\t|" << std::endl;
            std::cout << "\t---------------------------------\033[0m" << std::endl;
            exit(1);
        }
        else if(input == "ADD")
        {
            system("clear");
            book.addUserInfo();
        }
        else if(input == "SEARCH")
        {
            system("clear");
            book.getContactInfo();
        }
        else
        {
            system("clear");
            std::cout <<  " < " << input << " > " << "\033[1;31mError: please try again\033[0m" <<std::endl;
        }
    }
    
    return(1);
}
