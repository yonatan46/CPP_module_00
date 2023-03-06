#include <iostream>
#include <string.h>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
private:
    Contact _contact[8];
public:
    void setInfo(std::string firstName,
        std::string lastName,
        std::string phoneNumber,
        std::string darkestSecret);
    void getContactInfo( void );
    void addUserInfo();
    PhoneBook(void);
    ~PhoneBook();
};
void    PhoneBook::addUserInfo(void)
{
    std::string f_name;
    std::string l_name;
    std::string p_number;
    std::string d_secret;
    std::cout << std::setw(53);
    std::cout << "---------------------------------" << std::endl;
    std::cout << std::setw(50);
    std::cout << "Please fill in the form below" << std::endl;
    std::cout << std::setw(53);
    std::cout << "---------------------------------" << std::endl;
    std::cout << "first_name: ";
    std::getline(std::cin, f_name);
    std::cout << "last_name: ";
    std::getline(std::cin, l_name);
    std::cout << "phone_number: ";
    std::getline(std::cin, p_number);
    std::cout << "darkest_secret: ";
    std::cin >> d_secret;
    this->setInfo(f_name, l_name, p_number, d_secret);
}
void PhoneBook::setInfo(
    std::string firstName,
    std::string lastName,
    std::string phoneNumber,
    std::string darkestSecret
)
{
    static int i = 0;
    this->_contact[i % 8].setContact(firstName, lastName, phoneNumber, darkestSecret);
    i++;
}
void PhoneBook::getContactInfo()
{
    int x = 0;
    while (x < 8)
    {
        std::cout << x << "\t"; 
        _contact[x].getContact();
        x++;
    }
}
PhoneBook::PhoneBook( void )
{
}

PhoneBook::~PhoneBook()
{
}
