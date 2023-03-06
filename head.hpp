#ifndef HEAD_H
# define HEAD_H
#include <iostream>
#include "Contact.hpp"
class Sample1
{
public:
    Sample1(void);
    ~Sample1();
    int getSecret( void ) const;
    void setSecret( int secret);
private:
    int _secret;
};
Sample1::Sample1(void)
{
    std::cout << "construct" << std::endl;
    this->_secret = 42;
    return;
}

void Sample1::setSecret(int secret)
{
    if(secret >= 0)
        this->_secret = secret;
    return;
}

int Sample1::getSecret(void) const
{
    return this->_secret;
}

Sample1::~Sample1()
{
    std::cout << "destruct" << std::endl;
    return;
}
#endif