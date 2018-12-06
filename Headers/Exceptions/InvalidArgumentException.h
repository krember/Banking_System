//
// Created by Narek Hovhannisyan and/or Milena Mamyan.
//

#ifndef BANKINGSYSTEM_INVALIDARGUMENTEXCEPTION_H
#define BANKINGSYSTEM_INVALIDARGUMENTEXCEPTION_H

#include "Exception.h"

class InvalidArgumentException : public Exception {
public:
    InvalidArgumentException(const char * const desc);
    InvalidArgumentException(std::string desc);
    virtual std::string what();
};


#endif //BANKINGSYSTEM_INVALIDARGUMENTEXCEPTION_H
