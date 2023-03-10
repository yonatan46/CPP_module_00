#include "PhoneBook.hpp"

void    PhoneBook::addUserInfo(void)
{
    std::string f_name;
    std::string l_name;
    std::string n_name;
    std::string p_number;
    std::string d_secret;
    std::cout << std::setw(53);
    std::cout << "---------------------------------" << std::endl;
    std::cout << std::setw(50);
    std::cout << "Please fill in the form below" << std::endl;
    std::cout << std::setw(53);
    std::cout << "---------------------------------" << std::endl;
    std::cout << "first_name: ";
    f_name.clear();
    std::getline(std::cin, f_name);
    if(std::cin.eof())
        exit(1);
    std::cout << "last_name: ";
    std::getline(std::cin, l_name);
    if(std::cin.eof())
        exit(1);
    std::cout << "nick_name: ";
    std::getline(std::cin, n_name);
    if(std::cin.eof())
        exit(1);
    std::cout << "phone_number: ";
    std::getline(std::cin, p_number);
    if(std::cin.eof())
        exit(1);
    std::cout << "darkest_secret: ";
    std::getline(std::cin, d_secret);
    if(std::cin.eof())
        exit(1);
    if(f_name.empty() || l_name.empty() || n_name.empty() || p_number.empty() || d_secret.empty())
    {
        std::cout << "\033[1;31mError: there is an EMPTY input!\033[0m" <<std::endl;
        return ;
    }
    this->_setInfo(f_name, l_name, n_name, p_number, d_secret);
}

void PhoneBook::_setInfo(
    std::string firstName,
    std::string lastName,
    std::string nickname,
    std::string phoneNumber,
    std::string darkestSecret
)
{
    if(this->_counter == -1)
        this->_counter++;
    this->_contact[_counter % 8].setContact(firstName, lastName, nickname, phoneNumber, darkestSecret);
    _counter++;
}
void PhoneBook::_print_specific(int index)
{
    this->_contact[index].getContact_one();
}
void PhoneBook::getContactInfo()
{
    int x = 0;
    int input;
    if(x < 8 && x < this->_counter)
    {

        std::cout << std::setw(9) << "Index " << std::setw(12) << "Fist_name" << std::setw(11) << "Last_name" << std::setw(12) << "Nick_name\n" << std::endl;
        while (x < 8 && x < this->_counter)
        {
            std::cout << "|"  << std::setw(10) << x + 1; 
            this->_contact[x].getContact();
            x++;
        }
        std::cout << std::endl;
    }
    else
    {
        std::cout << "\033[1;31mError: no contact found!\033[0m" <<std::endl;
        return ;
    }
    std::cout << "Input index->: ";
    std::cin >> input;
    if(std::cin.eof())
        exit(1);
    if(input > 0 && input < 9)
    {
        if(this->_counter < input && this->_counter != -1)
            std::cout << "\033[1;31mError: no contact found!\033[0m" <<std::endl;
        else
            this->_print_specific(input - 1);
        std::cin.clear();
        std::cin.ignore();
    }
    else
    {
        std::cout << "\033[1;31mOUT OF RANGE\033[0m" << std::endl;
        std::cin.clear();
        std::cin.ignore();
    }
}
PhoneBook::PhoneBook( void )
{
    this->_counter = -1;
}

PhoneBook::~PhoneBook()
{
}
