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
    std::string _nickName;
    std::string _phoneNumber;
    std::string _darkestSecret;
    int _format_print(std::string input);
public:
    void setContact(std::string firstName,
        std::string lastName,
        std::string nickName,
        std::string phoneNumber,
        std::string darkestSecret);
    void getContact( void );
    void getContact_one( void );
    Contact( void );
    ~Contact();
};
#endif

