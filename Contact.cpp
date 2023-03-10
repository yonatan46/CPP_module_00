#include "Contact.hpp"
void Contact::setContact(std::string firstName,
        std::string lastName,
        std::string nickName,
        std::string phoneNumber,
        std::string darkestSecret)
{
    this->_firstName = firstName;
    this->_lastName = lastName;
    this->_nickName = nickName;
    this->_phoneNumber = phoneNumber;
    this->_darkestSecret = darkestSecret;
}

int Contact::_format_print(std::string input)
{
    if(input.length() > 10)
    {
        int x = 0;
        std::cout << "|";
        while(x < 9)
        {
            std::cout << input[x];
            x++;
        }
        std::cout << ".";
        return(1);
    }
    return(0);
}

void Contact::getContact()
{
    if(this->_format_print(this->_firstName) == 0)
        std::cout << "|" << std::setw(10) << this->_firstName;
    if(this->_format_print(this->_lastName) == 0)
        std::cout << "|" << std::setw(10) << this->_lastName;
    if(this->_format_print(this->_nickName) == 0)
        std::cout << "|" << std::setw(10) << this->_nickName << "|"  << std::endl;
    else
        std::cout << "|" << std::endl;
}
void Contact::getContact_one()
{
    std::cout << "\n\t\tCONTACT INFORMATION" << std::endl;
    std::cout << "First Name->\t\t" << this->_firstName << std::endl;
    std::cout << "Last Name->\t\t" << this->_lastName << std::endl;
    std::cout << "Nick Name->\t\t" << this->_nickName << std::endl;
    std::cout << "Phone Number->\t\t" << this->_phoneNumber << std::endl;
    std::cout << "Darkest Secret->\t\n" << this->_darkestSecret << std::endl;
}
Contact::Contact( void )
{
}

Contact::~Contact()
{
}
