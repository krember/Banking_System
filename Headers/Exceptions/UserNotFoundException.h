//
// Created by Narek Hovhannisyan and/or Milena Mamyan.
//

#ifndef BANKINGSYSTEM_USERNOTFOUNDEXCEPTION_H
#define BANKINGSYSTEM_USERNOTFOUNDEXCEPTION_H

#include "Exception.h"

class UserNotFoundException : public Exception {
public:
    UserNotFoundException(const char * const desc);
    UserNotFoundException(std::string desc);
    virtual std::string what();
};

#endif //BANKINGSYSTEM_USERNOTFOUNDEXCEPTION_H
