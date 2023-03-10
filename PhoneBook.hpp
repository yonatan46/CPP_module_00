#ifndef PhoneBook_H
# define PhoneBook_H

#include <iostream>
#include <string.h>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
private:
    int _counter;
    Contact _contact[8];
    void _print_specific(int index);
    void _setInfo(std::string firstName,
        std::string lastName,
        std::string nickname,
        std::string phoneNumber,
        std::string darkestSecret);
public:
    void getContactInfo( void );
    void addUserInfo();
    PhoneBook(void);
    ~PhoneBook();
};

#endif