//
// Created by Narek Hovhannisyan and/or Milena Mamyan.
//

#ifndef BANKINGSYSTEM_EXCEPTION_H
#define BANKINGSYSTEM_EXCEPTION_H

#include <string>

class Exception
{
protected:
    std::string m_description;
public:
    Exception(const char * const desc);
    Exception(std::string desc);
    virtual std::string what();
};


#endif //BANKINGSYSTEM_EXCEPTION_H
