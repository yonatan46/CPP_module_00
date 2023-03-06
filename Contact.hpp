#ifndef Contact_H
# define Contact_H
#include <iostream>
#include <string.h>
#include <iomanip>

class Contact
{
private:
    std::string _firstName;
    std::string _lastName;
    std::string _phoneNumber;
    std::string _darkestSecret;
public:
    void setContact(std::string firstName,
        std::string lastName,
        std::string phoneNumber,
        std::string darkestSecret);
    void getContact( void );
    Contact( void );
    ~Contact();
};
void Contact::setContact(std::string firstName,
        std::string lastName,
        std::string phoneNumber,
        std::string darkestSecret)
{
    this->_firstName = firstName;
    this->_lastName = lastName;
    this->_phoneNumber = phoneNumber;
    this->_darkestSecret = darkestSecret;
}

void Contact::getContact()
{
    // if(this->_firstName)
        std::cout << "first:\t" <<  this->_firstName << "\t";
    // if(this->_lastName)
        std::cout << "last:\t" <<  this->_lastName << std::endl;
}
Contact::Contact( void )
{
}

Contact::~Contact()
{
}

#endif